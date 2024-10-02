

/*                  Late Binding                */


#include<iostream>
using namespace std;

class A
{
    public:
        virtual void f1() { cout << "f1 of A\n"; }  // Late Binding hobar karon virtual function
};

class B: public A
{
    public:
        void f1()   { cout << "f1 of B\n"; }  // atau virtual function hoa jabe due to over-riding
        void f1(int a) {cout << "overloading";} // ata virtual function hobe-na due to overloading
        void f2()   {  cout << "f2 of B\n";  }
}; 


int main()
{
    A *p;  
    B o2;  

    p = &o2;  

    p->f1();

    return 0;
}