


#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter two no: ");
    scanf("%d %d",&a,&b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping : a = %d , b = %d, c = %d",a,b,c);
    
}