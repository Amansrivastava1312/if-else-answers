#include<stdio.h>
int main()

{

    int x ;

    printf("enter the number to check wether number is positive,negative or zero:");

    scanf("%d",&x);

    if (x>0)
    {
        if (x!=0)
       { printf("given number is positive ");

        }   
        else 
       {
        printf("number is equal to zero");
         }

}
    
      else

      {
          if (x!=0)
          {
              printf("number is negative");
          }
          else
          {
              printf("number is euqal to zero");
          }
      }

      return 0;
}