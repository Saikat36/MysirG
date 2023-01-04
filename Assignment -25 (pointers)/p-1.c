
#include <stdio.h>

void display(int *p, int size);
void input(int *p, int size);

int main()
{
    int a[10];
    input(a,10);
    printf("\n\n");
    display(a,10);
    printf("\n\n");
    
    return 0;
}

void display(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p+i));
    }
}

void input(int *p, int size)
{
    printf("Enter %d numbers\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",(p+i));
    }
}

// 1:04 min Application of pointers