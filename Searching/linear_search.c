#include <stdio.h>
int main()
{
  int n;
  printf("enter array size:\n");
  scanf("%d", &n);
  int arr[n];
  printf("enter elements in the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int target;
  printf("enter elements to search:\n");
  scanf("%d", &target);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      printf("element found at the position %d", i + 1);
      return 0;
    }
  }
  printf("element not found!");
}
