#include <stdio.h>
int main()
{
  // equation 3x+5=n
  int n;
  scanf("%d", &n);
  int low = 0, high = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    int sol = 3 * mid + 5;
    if (sol == n)
    {
      printf(" vlaue of x: %d", mid);
      return 0;
    }
    else if (sol > n)
      high = mid - 1;
    else
      low = mid + 1;
  }
  printf("no integer solution exists");
}
