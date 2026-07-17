#include <stdio.h>
int facto(int n)
{
  if (n == 0)
    return 1;
  if (n == 1)
    return 1;
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}
int main()
{
  int n;
  int r;
  printf("Enter n and r:\n");
  scanf("%d%d", &n, &r);
  int result = facto(n) / facto(n - r);
  printf("nPr=%d", result);
}
