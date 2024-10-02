

                    /* Operator Overloading */

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b; // instance member variables or fields

public:
    Complex() // Default Constructor
    {
        a = 0;
        b = 0;
    }
    Complex(int x) // One parameter Constructor
    {
        a = x;
    }
    Complex(int x, int y) // Two parameter Constructor
    {
        a = x;
        b = y;
    }

    Complex(Complex &C) // Copy Constructor
    {
        a = C.a;
        b = C.b;
    }

    void setData(int, int);     // decleare function
    void showData();            // decleare function
    Complex operator+(Complex); // Operator Overloading decleare function
};

/* Define every function here */

void Complex::setData(int x, int y)
{
    a = x;
    b = y;
}
void Complex::showData()
{
    cout << "\na=" << a << " b=" << b <<"\n";
}
Complex Complex::operator+(Complex C)   // Operator Overloading define function 
{
    Complex temp; // temp is also object
    temp.a = a + C.a;
    temp.b = b + C.b;
    return temp;
}

int main()
{
    Complex c1(1, 2), c2(3), c3, c4(6), c5(3, 6);
    
    c1.setData(3, 4);
    c2.setData(5, 6);

    Complex c7 = c1; // Copy Constructor

    c3 = c1 + c2; // Object.Operator+(Object) = c1.operator+(c2)  // Operator Overloading

    c3.showData();
    cout << endl;
    return 0;
}


/* 
    cout << x   =  same as =   count.operator<<(x)
    
 */