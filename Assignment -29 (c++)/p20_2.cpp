

                    /* Unary Operator Overloading */



#include <iostream>
using namespace std;

class Complex
{
    private:
        int a, b, c;

    public:
        Complex()   // Zero parameter Constructor
        {}

        Complex(int x, int y, int z)   // three parameter Constructor
        {  
            a = x;
            b = y;
            c = z;
        }
        Complex(int a, int b): a(a),b(b)   // Initialization list
        {}

        void two_parameter_showData();        // decleare function
        void three_parameter_showData();      // decleare function
        void unary_showData();                // decleare function

        Complex operator-();    // Unary Operator decleare function
};


void Complex::two_parameter_showData()
{
    cout << "\n a = " << a << " , b = " << b << "\n" << endl;
}

void Complex::three_parameter_showData()
{
    cout << "\n a = " << a << " , b = " << b << " , c = " << c << "\n" << endl;
}

void Complex::unary_showData()
{
    cout << "\n a = " << a << " , b = " << b << "\n" << endl;
}

Complex Complex:: operator-()   // Unary Operator define function
{
    Complex temp;
    temp.a = -a;
    temp.b = -b;
    return temp;
}


int main()
{
    Complex c1(2,5), c2(5,7,2), c3;
    c1.two_parameter_showData();
    c2.three_parameter_showData();

    c1.unary_showData();    // a = 2 , b = 5   
    c3 = -c1;       // c3 = c1.operator-()     // Unary Operator
    c3.unary_showData();  // Unary Operator // a = -2 , b = -5   

    return 0;
}