
#include<stdio.h>

void s9();

int main()
{
    s9();
    printf("\n");
    return 0;
}

void s9()
{
    int i,j,k;

    for(i=1;i<=4 ;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}