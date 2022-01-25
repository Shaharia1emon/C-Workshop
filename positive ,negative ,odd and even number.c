//31/10/19
#include<stdio.h>
int main()
{
    int num;
   printf("Enter a number:");
   scanf("%d",&num);
   if(num>0&&num%2==0)
    printf("%d,is a positive number \n",num);

  else
    printf("%d,is a negetive number \n",num);
    return 0;
}
