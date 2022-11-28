
#include<stdio.h>

void s1();

int main()
{
    s1();
    printf("\n");
    return 0;
}


void s1()
{
    int i,j;

    for(i=1;i<=4 ;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}