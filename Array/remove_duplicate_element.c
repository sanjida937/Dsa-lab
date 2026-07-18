#include<stdio.h>

int main() {
    int n;
    printf("Enter size:\n");
    
    scanf("%d",&n);

    int arr[n];
  printf("enter elements in the array:\n");

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int j=0;

    for(int i=1;i<n;i++) {
        if(arr[i]!=arr[j]) {
            j++;
            arr[j]=arr[i];
        }
    }

    for(int i=0;i<=j;i++)
        printf("%d ",arr[i]);
}
