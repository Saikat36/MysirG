


/*                             Early Binding                        */

#include<iostream>
using namespace std;

class A
{
    public:
        void f1()   {  cout << "f1 of A\n";  }
        void f3()   {  cout << "f3 of A\n";  }
};

class B: public A
{
    public:
        void f1()   {  cout << "f1 of B\n";  }
        void f2()   {  cout << "f2 of B\n";  }
}; 


int main()
{
    A *p;   // "p" holo "A" class er pointer, ortat "P" holo - 
            // - Base Classer Pointer / Parent classer Pointer

    B o2;   // "B" is a descendant class / child class 

    p = &o2;   /*  "P", is a Base Pointer and he can 
                    Point to an object of any descendant 
                    class but can only access base class 
                    members like this = "p->f1();" 
                    but he can-not access descendant class
                    members like this = "p->f2();" 
                    because of "Early Binding".   */

    o2.f3();  // "o2" Class "B", Ar ai "B" class a "f3" function-
              // -nai but "f3" function Inheritance madhoma Child-
              // -class dara access ho66a 


    p->f1();


//  o2.f2();     // It is right
//  p->f2();    // For the reason of "Early Binding" this is wrong

    return 0;

}

/*                          "Early Binding" Explain


1.  Base class pointer can point to an object of any descendant class but can access only base class members,  why ?? 
                                    or

1. f2 function কে object dea call korla, Dot lagea Call করা হচ্ছিল এভাবে = o2.f2();  
এবার "P" Pointer a যখন "o2" Object এর Address Store করা যাচ্ছে, এভাবে " p = &o2 ", এবং
"P" Pointer dea Parent Class "A" ar "f1" function ke call kora ja66e , এভাবে " p->f1(); " 
tahole "P" Pointer dea Child Class "B" ar "f2" function ke এভাবে " p->f2(); " 
call kora ja66ena kno ??? 



Ans =  আমরা আগেই দেখেছি Pointer যে Type-er হয় সেই টাইপের Value কে Store করতে পারে. 
যেমন :- int *p ,  int value Store করতে পারে , তেমনি Char *p , Char value Store করতে পারে.

এবার যখন object দিয়ে Dot lagea Call করা হচ্ছিল "f2" function কে , 

            এভাবে = o2.f2(); 

তখন 1st a Compiler, "o2" object কে দেখবে সে কোন টাইপের Class. 
     2nd a Compiler,  এই লাইনটা পড়ে "B o2;" দেখলো "o2" object-er Class holo = "B" 
     3rd a Compiler,  "B" Class a gea "f2" Function er kaj ta complete korlo . 


এবার যখন Pointer দিয়ে Arrow(->) Call করা হচ্ছিল "f1 & f2" function কে ,

            এভাবে = p->f1(); and  p->f2(); 

এক্ষেত্রে P pointer Type holo "A" Class Type-এর. তাই "P" Pointer store korta 
parbe "A" type-er data , যেহেতু B Class হলো A Class-er Child Class তাই B Class দিয়ে তৈরি Object-er Address রাখতে পারবে. কিন্তু B Class-er দিয়ে তৈরি Object-er কোন Data member অথবা Data Function কে Access করতে পারবেনা কারণ - 

এক্ষেত্রে = p->f1(); 

    1st a Compiler, দেখল "f1()" Function Call hoa6a kon object theka 
    2nd a Compiler,  এই লাইনটা পড়ে "A *p;" দেখলো "f1()" function-er Object holo = "p" 
    3rd a Compiler,  "A" Class a gea "f1()" Function er kaj ta complete korlo . 


এক্ষেত্রে = p->f2(); 

    1st a Compiler, দেখল "f2()" Function Call hoa6a kon object theka 

    2nd a Compiler, এই লাইনটা পড়ে "p->f2();" দেখলো "f2()" function-er kono Object 
                    theka call hoini, Pointer( "p" ) theka call hoa6a. 

    3rd a Compiler,  এই লাইনটা পড়ে "A *p;" দেখলো "p" pointer-er holo "A" Type-er

    4th a Compiler,  "A" Class A gea "f2()" name a function ke khujbe, kintu jokon 
    pabena tokon "Error" diba. 

*/