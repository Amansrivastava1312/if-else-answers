#include<stdio.h>
int main()

{
    int a,b,c,d,e,percentage,r;

    printf("enter the marks of computer--");
    scanf("%d" ,&a);
    printf("enter the marks of maths--");
    scanf("%d" ,&b);
    printf("enter the marks of physics--");
    scanf("%d" ,&c);
    printf("enter the marks of chemistry--");
    scanf("%d" ,&d);
    printf("enter the marks of biology--");
    scanf("%d" ,&e);
 r = (a+b+c+d+e)/500;
 percentage = r*100 ;
    if (percentage >= 90)
    {
        printf("grade A");
    }

    
    else if ((percentage >= 80) && (percentage < 90))
    {
        printf("grade B");

    }

    else if ((percentage >= 70) && (percentage < 80))
    {
        printf("grade C");

    }

    else if ((percentage >= 60) && (percentage < 70))
    {
        printf("grade D");

    }

    else if ((percentage >= 40) && (percentage < 60))
    {
        printf("grade E");

    }

else 
{
    printf("grade F");
}

return 0;
}
        