#include <stdio.h>
int main()
{
  int n;//a perfect square
  printf("enter the number:\n");
  scanf("%d",&n);
  int low=1,high=n,mid;
  while(low<=high){
     mid=(low+high)/2;
    int res=mid*mid;
    if(res==n) 
  break;
        else if (res>n) 
        high=mid-1;
        else 
      low=mid+1;
     }
     printf("%d",mid);
}
