#include<stdio.h>
int main()

{
    int x ,y,amount;

    printf("enter selling price--");
    scanf("%d",&x);

    printf("enter cost price--");
    scanf("%d",&y);

    if (x>y)
    {
       amount = x-y;
        printf("profit of %d",amount);
        }

        else if (x<y)

        {
            amount = y- x;
            printf("loss of %d",amount);
        }
    else
    {
        printf("no profit no loss");
    }

return 0;
}