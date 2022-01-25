#include<stdio.h>
int main()
{
     int a[1000];
     int i,n;
     printf("Enter total number the elements: ");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        printf("enter the any number %d:",i+1);
     scanf("%d",&a[i]);}
     for(i=0;i<n;i++){
        if(a[0]<a[i]){
            a[0]=a[i];
        }

     }
printf("Largest value is:%d",a[0]);


    return 0;
}
