#include<stdio.h>
int main()
{
    float weight=0;
    float height=0;
    float age=0;
    float bmr=0;
    float bmi=0;
     printf("Enter your weight:");
     scanf("%f",&weight);
     printf("Enter your height:");
     scanf("%f",&height);
     printf("Enetr your age:");
     scanf("%f",&age);
     bmi=weight/(height*height);
     bmr=66+(13.7*weight)+(5*height)-(6.8*age);
     printf("your bmr is %f cal\n",bmr);
if(bmi<=18.5)
    printf("your bmi is %f:komace\n",bmi);
else if(bmi<=24.9)
    printf("your bmi is %f:thikace\n",bmi);
else if (bmi<=29.9)
printf("your bmi is %f:besi hoigace\n",bmi);
else
    printf("your bmi is %f:khawa thik kro\n",bmi);

    return 0;
}
