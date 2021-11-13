#include<stdio.h>
int main()

{
    char ch;

    printf("enter the alphabet too check it is upper case or lower --");

    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')

    { 
        printf("entered character is of lower case ");
        
    }
            
     else
    {
        if (ch >= 'A' && ch<= 'Z')
        {
            printf("entered character is of upper case");
        }
        else
        {
            printf("enter the valid input");
        }
    }
return 0;
}