

/* 6. Write a program to sort elements of an array of size 10.
 Take array values from the user. */

/* THIS IS BUBBLE SORT */

#include<stdio.h>

int main()
{
    int i, a[10], r, t;

    printf("Enter 10 numbers: \n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    /* (0,1) round no - 1 */
    /* (1,2) round no - 1 */
    /* (2,3) round no - 1 */
    /* (3,4) round no - 1 */
    /* (4,5) round no - 1 */
    /* (5,6) round no - 1 */
    /* (6,7) round no - 1 */
    /* (7,8) round no - 1 */
    /* (8,9) round no - 1 */    
    /*--------------------*/
    /*   TOTAL  ROUND - 9 */   /* So here Round = r = 9  */


    for (r = 1; r <= 9; r++) // 1-9 value sort hole 0th value automatically right jaigai thakbe
    {
        for (i = 0; i <= 9 - r; i++)   // i=0 to i=8 because when i=8 then in the next line a[8]>a[8+1]
        {
            if (a[i] > a[i + 1])    // i=0 to i=1;    i=1 to i=2    when i=8 then i=8+1=9
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }

    printf("\n\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    return 0;
}
