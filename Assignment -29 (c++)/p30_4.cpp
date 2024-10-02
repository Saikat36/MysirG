

                /*       Function Over-riding            */            


/* এখানে দেখতে পাচ্ছি Class A এবং Class B এ  "f1"  name a same Function আছে।  এবং  2 টি Function Non-Parameterize, তখন সে ক্ষেত্রে Child Class-er Function টি Parent Class-er function কে Over-ride করে। */

#include<iostream>
using namespace std;

class A
{
    public:
        void f1()   {  cout << "\nf1 of class A";  }
};

class B: public A
{
    public:
        void f1()   {  cout << "\nf1 of class B";  }
        void f2()   {  cout << "\nf2 of class B";  }
}; 


int main()
{
    B obj;

    obj.f1();  // child "f1" function Over-ride parent "f1" function 

    return 0;
}