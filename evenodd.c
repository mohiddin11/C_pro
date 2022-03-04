#include<stdio.h>
int main ()
{
    int number;
    printf ("Insert a number \n");
    scanf ("%d", &number);

       if (number % 2 == 0)
        printf ("Even");
    else
        printf ("Odd");
  
    return 0;
}
