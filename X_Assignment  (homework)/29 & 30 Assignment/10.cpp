

/* 10. Write functions using function overloading to add two numbers having different data types. */


#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a+b);
}

double max(double a, double b)
{
    return (a+b);
}

int main()
{
    int num1_int = 5, num2_int = 10;
    double num1_double = 5.5, num2_double = 10.5;

    cout << "Maximum of " << max(num1_int, num2_int) << endl;
    cout << "Maximum of " << max(num1_double, num2_double) << endl;

    return 0;
}
