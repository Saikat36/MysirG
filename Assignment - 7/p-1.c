/* 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter length of the sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
        printf("Valid Traingle");
    else
        printf("Invalid Tringle");

    return 0;
}