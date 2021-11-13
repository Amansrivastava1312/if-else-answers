#include <stdio.h>
int main()

{

    int x,y,z;

    scanf("%d%d%d",&x,&y,&z);

    if ('x' == 'y '== 'z' )
    {
        printf("triangle is equilateral triangle");
    }

    else if (('x' == 'y'!= 'z' ) || ('x'!= 'y' == 'z') || ('x' == 'z' !='y'))

    {
        printf("triangle is isoceles triangle");
    }
     
     else
     {
         printf("scalen triangle");
     }
     return 0;
}