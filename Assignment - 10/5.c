/* write a programe to check wheather two given numbers are co-prime numbers or not */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,h;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    for (h = a < b ? a : b; h >= 1; h--)
    {
        if (a % h == 0 && b % h == 0)
        {
            break;
        }
    }
    if (h==1)
    {
        printf("%d and %d are co-prime that's why there HCF is %d",a,b,h);
    }
    else{
        printf("%d and %d are not co-prime that's why there HCF is %d",a,b,h);
    }
    printf("\n");
    return 0;
}