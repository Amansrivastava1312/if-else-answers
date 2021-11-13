#include<stdio.h>
int main()

{

    char ch;

    printf("enter any character");

    scanf("%c",&ch);

    if  (  (ch >= 'a' && ch <='z') ||  (ch >='A' && ch <='Z')  )

    {
        printf("entered character is alphabet");
    }
  
  else
  {
      printf("entered charecter is not alphabet");
  }

  return 0;}