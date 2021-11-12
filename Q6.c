#include<stdio.h>
int main()

{
int y;

printf  ("enter the year to check it is leap or not");
scanf("%d",&y);


if (y%4==0)
{
   if(y%100==0)
   {
       if (y%400==0)
       {
           printf("given year is leap year");
       }
        else
           {
           printf(" not leap year");
       }
   }
    else{

           printf("leap year");
        }
}          
       
else
    {

       printf("not a leap year");
   }

 return 0;
}


