#include<stdio.h>
int main()

{

int x;

printf("enter the number to check it is divisible by 5 and 11:");

scanf("%d",&x);

/*if number have to be divisible by 5 and 11 it should be divisible by 55*/

if (x % 55 == 0)

{  printf("number is divisible");

}

else 

{
    printf("number is not divisible");
}

    return 0;
}