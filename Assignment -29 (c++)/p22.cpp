


/* This is a example of a function which is a is "friend function + member function" */


/* "friend function" akta class er member hote pare and oi same "friend function" onno class er "friend" hota pare */

/*      Here "void f1()" function is a "member function" of class A, and 
             "void f1()" function is a "friend function" of class B       */


#include <iostream>
using namespace std;

class A
{
    public:

        void f1();
};

void A::f1()
{

};

class B
{
    friend void A::f1();    // "A" name a je class a6a tar modhe je "f1" name a function a6e sei "f1" function ta "B" class-er friend
};


 /* friend void A::f1(); atai " A:: " laganor karon holo, akta function a onk golo class thakte pare and onk same name-er friend function thakte pare, tai ata mention kore dita hobe kon friend function ke call kora ho66a */