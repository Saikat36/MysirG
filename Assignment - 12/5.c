

#include<stdio.h>

void s5();

int main()
{
    s5();
    printf("\n");
    return 0;
}

void s5()
{
    int i,j;
    char k;
    for(i=1;i<=4 ;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}