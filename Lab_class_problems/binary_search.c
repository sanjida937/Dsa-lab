#include <stdio.h>
int main()
{
  int n;
  printf("enter array size:\n");
  scanf("%d", &n);
  int arr[n];
  printf("enter elements in the sorted order:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int target;
  printf("enter element to search:\n");
  scanf("%d", &target);
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
      printf("element found at index %d", mid);
      return 0;
    }
    else if (arr[mid] < target)
      low = mid + 1;
    else
      high = mid - 1;
  }
  printf("element not found!");
}
