//01-02-2020
#include<stdio.h>
int main()
{

    int i;

    int a[7]={1,2,3,4,5,6,7};

    printf("\t\tEnter (1-7)than you can show weekenday:");
    scanf("%d\n",&i);

    switch (i)
     {
     case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
        case 3:
        printf("Monday\n");
        break;
        case 4:
        printf("Tuesday\n");
        break;
        case 5:
        printf("Wednesday\n");
        break;
        case 6:
        printf("Thursday\n");
        break;
        case 7:
        printf("Friday\n");
        break;
        default:
            printf("Invalid Week\n ");

    }
        printf("\t\tYour works is Done\n");

    return 0;


}
