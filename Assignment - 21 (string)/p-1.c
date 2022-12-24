
/* calculate length of the string */

#include<stdio.h>

int main()
{
    char str[10] = "BHOPAL";
    int c = 0;
    for (int i = 0; str[i]; i++)
    {
        c++;
    }
    printf("Length is = %d",c);
    return 0;
}