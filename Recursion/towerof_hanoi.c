#include <stdio.h>
void toweofhanoi(int n, char src, char helper, char dest)
{
  if (n == 1)
  { // only one disk
    printf("transfer disk %d from %c to %c\n", n, src, dest);
    return;
  }
  // else
  toweofhanoi(n - 1, src, dest, helper);                    // 1st step
  printf("transfer disk %d from %c to %c\n", n, src, dest); // 2nd step
  toweofhanoi(n - 1, helper, src, dest);                    // 3rd step
}
int main()
{
  int n;
  printf("Enter number of disks:\n");
  scanf("%d", &n);
  toweofhanoi(n, 'S', 'H', 'D');
}
