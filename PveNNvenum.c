#include <stdio.h>
int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    
    //Conditions to check if the number is negative/positive or zero
    if (num > 0)
         printf("The number is positive");
    else if (num < 0)
        printf("The number is negative");
    else
        printf("Zero");
    
    return 0;
}
