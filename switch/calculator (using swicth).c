#include<stdio.h>
int main()
{
     int select;
     int a,b;
     while(1){


     printf("1.Addition\n2.Subtraction\n3.Multiplaction.\n4.Division.\n");
     printf(" which you select number:\n");
     scanf("%d",&select);
      switch ( select){
   case 1:
       printf("Enter any vlaue a and b:\n");
       scanf("%d%d",&a,&b);
       printf("Additon=%d\n",a+b);

    break;
   case 2:
        printf("Enter any vlaue a and b:\n");
       scanf("%d%d",&a,&b);
       printf("Subtraction=%d\n",a-b);

    break ;
     case 3:
          printf("Enter any vlaue a and b:\n");
       scanf("%d%d",&a,&b);
       printf("Multiplaction=%d\n",a*b);

    break;
   case 4:
        printf("Enter any vlaue a and b:\n");
       scanf("%d%d",&a,&b);
       printf("Division=%d\n",a/b);

    break ;
   default:

    printf("Invalid your selection");

      }
     }
    return 0;
}
