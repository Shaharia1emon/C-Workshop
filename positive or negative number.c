//31/10/19
#include<stdio.h>

int main()
   {

int num;
    printf("Enter the value:");
    scanf("%d",&num);

    if(num>0 && num%2==0)
    printf("This is positive & even number %d",num);

    else if(num<0 && num%2==0)
printf("This is negative & even number %d",num);

    else if(num>0 && num%2!=0)
printf("This is positive & odd number %d",num);

    else
printf("This is negative & odd number %d",num);


    return 0;

    }
