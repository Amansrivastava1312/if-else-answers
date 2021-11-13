#include<stdio.h>
int main()

{

    int x,y,z;

    scanf("%d%d%d",&x,&y,&z);

    if ((x+y+z) == 180)
    {
        printf("angles are valid for triangle");
    }

    else
    {
        printf("not valid angles for triangle");
        }


    return 0;
}