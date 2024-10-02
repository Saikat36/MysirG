

                /*       Function Hiding            */


/* এখানে দেখতে পাচ্ছি Class A এবং Class B এ  "f1"  name a same Function আছে।  কিন্তু একটি Function Parameterize এবং অন্যটি Non-Parameterize তখন সে ক্ষেত্রে Child Class-er Function টি Parent Class-er function কে hide করে।

যেমন এখানে Child Class থাকা "f1" Function, Parent Class থাকা "f1" Function ta ke hide করে দেয় একে বলে Function Hiding  */


/* nicha ai example ai line a [ obj.A::f1() ] dekhano holo ki vabe same name thaka function keu Parent class er madhome call kora jata pare  */


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
        void f1(int x)   {  cout << "\nf1 of class B";  }
        void f2()   {  cout << "\nf2 of class B";  }
}; 


int main()
{
    B obj;

    obj.f1(4);  // "f1" function exist in both class 
    
    obj.A::f1();  // akhena parent class thaka "f1" function ke call kora holo

    return 0;
}