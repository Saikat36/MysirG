

/* 1. Define a function to check whether a given number is a Prime number or not. */

#include <iostream>
using namespace std;

bool f1(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

/* 2. Define a function to find the highest value digit in a given number. */

int f2(int x)
{
    int max = -1;
    int rem;

    while (x)
    {
        rem = x % 10;
        if (rem > max)
        {
            max = rem;
        }
        x = x / 10;
    }
    return max;
}

/* 3. Define a function to calculate x raised to the power y. */

void f3()
{
    double x, y, result = 1.0;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    if (y < 0)
    {
        result = result / x;
    }

    else if (y > 0)
    {
        result = result * x;
    }
    cout << "\n " << x << " raised to the power " << y << " is " << result << "\n " << endl;
}


/* 5. Define a function to check whether a given number is a term in a Fibonacci series or not. */

void f5()
{
    int a = -1, b = 1, c = 0;
    int num;

    cout << "\nEnter a number :  ";
    cin >> num;

    while (c < num)
    {
        c = a + b;
        if (c == num)
        {
            cout << num << " is in Fibonacci series" << endl;
            return;
        }
        a = b;
        b = c;
    }
    cout << num << " is not in Fibonacci series" << endl;
}


/* 6. Define a function to swap data of two int variables using call by reference */

void f6(int &x, int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "x = " << x << " , y = " << y << endl; 
}



int main()
{
    int x,y;
    cout << "Enter two No ";
    cin >> x >> y;
    f6(x,y);
    return 0;
}