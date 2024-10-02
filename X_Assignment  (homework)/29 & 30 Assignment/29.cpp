

/* 			Assignment-29: Basics of C++        */

#include <iostream>
using namespace std;

/* 1. Write a C++ program to print Hello MySirG on the screen. */

void f1()
{
    cout << "Hello MySirG" << endl;
}

/* 2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl. */

void f2()
{
    cout << "Hello \n MySirG" << endl;
}

/* 3. Write a C++ program to calculate the sum of two numbers. */

void f3()
{
    int a, b, c;
    cout << "Enter two No: " << endl;
    cin >> a >> b;
    c = a + b;
    cout << "Sum is " << c << endl;
}

/* 4. Write a C++ program to calculate the area of a circle */

void f4()
{
    int a;
    float b, c;
    cout << "Enter two Radious of a circle : " << endl;
    cin >> a;
    c = 3.14 * a * a;
    cout << "Area of a circle is " << c << endl;
}

/* 5. Write a C++ program to calculate the volume of a cuboid. */

void f5()
{
    int l, b, h, v;
    cout << "Enter length, breadth, height of a cuboid : " << endl;
    cin >> l >> b >> h;
    v = l * b * h;
    cout << "Volume is " << v << endl;
}

/* 6. Write a C++ program to calculate an average of 3 numbers. */

void f6()
{
    int a, b, c;
    float avg;
    cout << "Enter three No : " << endl;
    cin >> a >> b >> c;
    avg = (a + b + c) / 3.0;
    cout << "Avarage is " << avg << endl;
}

/* 7. Write a C++ program to calculate the square of a number */

void f7()
{
    int a;
    cout << "Enter a No : " << endl;
    cin >> a;
    cout << "Square is " << a * a << endl;
}

/* 8. Write a C++ program to swap values of two int variables without using third variable */

void f8()
{
    int a, b;
    cout << "Enter two No : " << endl;
    cin >> a >> b;
    cout << "Before Swapping , a =  " << a << "  &  b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swapping , a =  " << a << "  &  b = " << b << endl;
}

/* 9. Write a C++ program to find the maximum of two numbers. */

void f9()
{
    int a, b;
    cout << "Enter two No : " << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
}

/* 10. Write a C++ program to add all the numbers of an array of size 10. */

void f10()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    cout << "sum is " << sum << endl;
}

int main()
{
    f10();
    return 0;
}