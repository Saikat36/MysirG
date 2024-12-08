


#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter two no: ");
    scanf("%d %d",&a,&b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping : a = %d , b = %d, c = %d",a,b,c);
    
}



/*          Swaping Without 3rd Veriable  */


// #include<stdio.h>

// int main()
// {
//     int a,b;
//     printf("Enter 2 no: ");
//     scanf("%d %d",&a,&b);
//     printf("You are entered : A = %d , B = %d \n",a,b);

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("After Swaping :  A = %d , B = %d ", a,b);
//     return 0;

// }

