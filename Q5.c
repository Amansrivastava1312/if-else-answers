#include<stdio.h>
int main()

{
int x;

printf("enter the number to check it is odd or even:");

scanf("%d",&x);

if( x % 2 == 0)
{
    printf("number is even");
}

else
{
    printf("number is odd");
}
return 0;
}