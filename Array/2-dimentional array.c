//28-1-2020
#include<stdio.h>
int main()
{
    int a[3][2]={{10,20},{20,30},{40,30}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
