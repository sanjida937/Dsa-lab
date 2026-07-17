#include <stdio.h>
int main()
{
  int n, temp,j;
  printf("Enter array size:\n");
  scanf("%d", &n);
  int arr[n];
  printf("Enter elements in the array:");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  // insertion sort
  for (int i = 0; i < n; i++)
  {
    int temp = arr[i]; // at first temp =arr[0];
    for (j = i - 1; j >= 0 && arr[j] > temp; j--)
    {
      arr[j + 1] = arr[j];
    }
          arr[j + 1] = temp;
  }
  printf("Array after sorting :\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
