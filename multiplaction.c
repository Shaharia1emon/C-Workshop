//28-01-2020.
#include<stdio.h>
int main()
{
     int i,num,m;

     printf("Enter any number:");
     scanf("%d",&num);
     for(i=1;i<=10;i++){
        m=num*i;
        printf("%d*%d=%d\n",num,i,m);
     }
      printf("    Emon's works is done");
    return 0;
}
