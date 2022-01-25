//02-01-2020
#include<stdio.h>
int main()
{
    int i;
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    while (1){
    printf("\t\tEneter any number from 1 to 12:\n");
    scanf("%d",&i);



    switch (i){
 case 1:
     printf("January\n");
     printf("This month Day-31\n");
     break;
    case 3:
        printf("March\n");
        printf("Day-31\n");
        break;
        case 5:
            printf("May\n");
            printf("Day-31\n");
            break;
            case 7:
                printf("July\n");
                printf("Day-31\n");
                break;
                case 8:
                    printf("Auguest\n");
                    printf("Day-31\n");
                    break;
                    case 10:
                        printf("October\n");
                        printf("Day-31\n");
                        break;
                        case 12:
                            printf("December\n");
                            printf("Day-31\n");
                            break;
                            case 4:
                                printf("April\n");
                                 printf("Day-30\n");
                            break;
                            case 6:
                                printf("June\n");
                                 printf("Day-30\n");
                            break;
                            case 9:
                                printf("September\n");
                                 printf("Day-30\n");
                            break;
                            case 11:
                                printf("Novmbver\n");
                                 printf("Day-30\n");
                            break;
                            case 2:
                                printf("February\n");
                                printf("This month on days-28");
                                break;
                            default:
                                printf("Invalid number.");


    }
    }

    return 0;
}
