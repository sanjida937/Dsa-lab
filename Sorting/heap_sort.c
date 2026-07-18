#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int arr[], int n, int i)
{
    int largest = i;
    int l_child = 2 * i;
    int r_child = 2 * i + 1;

    if (l_child <= n && arr[l_child] > arr[largest])
    {
        largest = l_child;
    }

    if (r_child <= n && arr[r_child] > arr[largest])
    {
        largest = r_child;
    }

    if (largest != i)
    {
        swap(&arr[largest], &arr[i]);
        max_heapify(arr, n, largest);
    }
}

void heap_sort(int arr[], int n)
{
    // Build Max Heap
    for (int i = n / 2; i >= 1; i--)
    {
        max_heapify(arr, n, i);
    }

    // Heap Sort
    for (int i = n; i >= 2; i--)
    {
        swap(&arr[1], &arr[i]);
        max_heapify(arr, i - 1, 1);
    }
}

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter elements: ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    heap_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

  
}
