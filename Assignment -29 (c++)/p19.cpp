
                        /*  Initialization list  */

/* Constructor ar body start hobar aga "colon(:)" dea field (int a, b;) dika initialization kora ke bola Initialization list, kintu kheya rakhte hobe ai Initialization ta kintu "=" operator dea hoina just "fileld name(value)" */

/*  Initialization list er feature - 

      Complex(int a , int b, int k): a(a),b(b),k(k)
        {

        }

    atai kintu je variable pass kora hoa6a seta and field(int a, b, k) er name same but tate kono problem hobena karon - 

    "a(a), b(b), k(k)" bayrer "a, b, k" ta holo filed a use kora "a,b,k"
    and "(a) & (b) & (k)" ta holo "Complex c5(3,6,8)" ar "3,6,8"

    same name rakhar feature ta only tokhoni use hobe jodi "Initialization list" use kora hoi

 */

#include <iostream>
using namespace std;
class Complex
{
    private:
        int a, b; // instance member variables or field
        const int k;

    public:

        Complex(): a(0),b(0),k(0)     // Initialization list
        {}
        Complex(int x): a(x) , k(0)   // One parameter Constructor
        {}
        Complex(int a , int b, int k): a(a),b(b),k(k)   // Initialization list
        {}
        Complex(Complex &C): k(C.k)  // Copy Constructor
        {
            a = C.a;
            b = C.b;
        }

        void setData(int, int); // decleare function
        void showData();        // decleare function
};


                /* Define every function here */

void Complex::setData(int x, int y)
{
    a = x;
    b = y;
}
void Complex::showData()
{
    cout << "\na = " << a << ", b = " << b << ", k = " << k;
}


int main()
{
    Complex c1(1,2,5), c2(3), c3 , c4(6), c5(3,6,8);

    Complex c7 = c5;    // Copy Constructor

    c7.showData();
    
    cout <<"\n"<< endl;
    return 0;
}