
#include<stdio.h>

void s3(int);

int main()
{
    s3(4);
    printf("\n");
    return 0;
}

void s3(int lines)
{
    int i,j,k;

    for(i=1;i<=lines ;i++)
    {
        k=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                if(k)
                    printf("*");
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}