

#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c) / 3.0;
    printf("Average is %f", avg);
    printf("\n");
    return 0;
}