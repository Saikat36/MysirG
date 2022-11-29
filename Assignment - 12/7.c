void s7(int);

int main()
{
    s7(10);
    printf("\n");
    return 0;
}

void s7(int lines)
{
    int i,j,k,x;

    for(i=1;i<=lines ;i++)
    {
        k=1;
        x=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                if(k)
                {
                    printf("%d",x);
                    j<lines?x++:x--;
                }
                else
                {
                    printf(" ");
                    if(j==lines)
                        x--;
                }
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}