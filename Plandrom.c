#include<stdio.h>
#include<string.h>

int main()
{
     char a[100],b[100];
    // while(1)
     //{
      printf("Enter the string or int number to check it is a palindrome number:\n ");
  gets(a);
       strcpy (b,a);
        strrev(b);

         if(strcmp(a,b)==0)
            printf("The string is palindrome number\n");
         else
            printf("The string is not palindrome number \n");
     //}
    return 0;
}

