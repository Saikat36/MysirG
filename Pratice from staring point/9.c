

#include <stdio.h>
int main()
{
    char a, b, c;
    printf("Enter three characters: ");
    scanf("%c %c %c", &a, &b, &c);
    printf("%c - %d\n", a, a);
    printf("%c - %d\n", b, b);
    printf("%c - %d\n", c, c);
    printf("\n");
    return 0;
}