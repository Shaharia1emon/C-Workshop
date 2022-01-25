//01-02-2020
#include<stdio.h>
int main()
{
    char Gender;
    printf("Enetr This number  and your Gender(/m/M/f/F):\n");
    scanf("%c",&Gender);
    switch (Gender)

    {
    case 'm':
        case 'M':
        printf("Male\n");
        break;
         case 'f':
        case 'F':
        printf("Female\n");
        break;



        default:
            printf("Hizlar baccah\n");
    }

    return 0;
}
