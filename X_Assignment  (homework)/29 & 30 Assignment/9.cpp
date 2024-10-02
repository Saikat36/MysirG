


/* 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real. */

#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

double max(double a, double b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1_int = 5, num2_int = 10;
    double num1_double = 5.5, num2_double = 10.5;

    cout << "Maximum of " << num1_int << " and " << num2_int << " is " << max(num1_int, num2_int) << endl;
    cout << "Maximum of " << num1_double << " and " << num2_double << " is " << max(num1_double, num2_double) << endl;

    return 0;
}
