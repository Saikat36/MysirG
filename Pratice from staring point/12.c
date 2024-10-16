


/*  Conditional Operator */


#include<stdio.h>

int main()
{
    int a,x;

    printf("Enter a no : ");
    scanf("%d",&a);

    // a > 0 ? printf("Possitive") : printf("Non-Possitive");

    x = a > 0 ? printf("Possitive") : printf("Non-Possitive");
    printf(x);
}