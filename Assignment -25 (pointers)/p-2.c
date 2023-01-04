
#include <stdio.h>

void display(int *p, int size);
void input(int **q, int n, int size[]);

int main()
{
    int a[5], b[6], c[3], d[8];
    int *p[4];
    int size[] = {5, 6, 3, 8};
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;

    input(p, 4, size);

    for (int i = 0; i < 4; i++)
    {
        display(p[i],size[i]);
    }
    
    printf("\n\n");
    return 0;
}

void display(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
}

void input(int **q, int n, int size[])
{

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter %d numbers\n", size[i]);

        for (int j = 0; j < size[i]; j++)
        {
            scanf("%d", *(q + i) + j); // *(q+i)+j = p[i]+j = a[j]
        }
    }
}

// 1:40 min
