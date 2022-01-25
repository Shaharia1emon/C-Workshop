// 31/10/19
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number%2==0)
        printf("Even number\n");
    else
        printf("Odd number\n");
    printf("##End##");
    return 0;
}
