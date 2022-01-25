//28-01-2020.
#include<stdio.h>

int main()
{
    int a[100];
    int avg,i,n,sum=0;
    printf("enter the value of students:");
scanf("%d",& n);
    for(i=0;i<n;i++){
    printf("Enter the students marks:");
         scanf("%d",& a[i]);
    }
    for(i=0;i<n;i++)
        sum=sum+a[i];
    avg=sum/n;
    printf("Average marks=%d\n",avg);
    return 0;
}
