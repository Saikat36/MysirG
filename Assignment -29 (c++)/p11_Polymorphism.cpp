
/* Function Overloading - _28__Function_Overloading_( p11_Polimorphism.cpp ) */

/* Instance means object */

/*  1. Polymorphism  -

        1. Compile time Polymorphism - 
                                    1. Function Overloading 
                                    2. Operator Overloading = p20.cpp
        2. Runtime Polymorphism  - 
                                    3. Virtual function 
*/

/*
In C language -   Function names must be unique

In C++ language - Function signature must be unique  

                      Function signature  - 1. Function name
                                            2. Arguments Type
                                            3. but not return type

1. Function Prototype = Function name + Arguments Type + return type
2. Function signature = Function name + Arguments Type

Function signature example -   

            void fun(int a) -> here return type void, arugement type & function name same  
            int fun (int X) -> here return type int, arugement type & function name same  


NOTE:- In C Function Name must be unique 
NOTE:- In C++ Function Signature must be unique 


 Function overloading / Function Polymorphism = 

    when one funtion name is overloded with two different job then it is called Function overloading, here "add()" function is overloading

*/

#include<iostream>
using namespace std;

int add(int,int);       // for 2 argument
int add(int,int,int);   // for 3 argument


int main()
{
    int x,y,z;
    cout<<"\nEnter Two no: \n";
    cin>>x>>y;
    cout<<"Sum of Two no is  "<< add(x,y) <<endl;
    cout<<"\nEnter Three no: \n";
    cin>>x>>y>>z;
    cout<<"Sum of Three no is "<< add(x,y,z) <<endl;
    cout<<endl;
    return 0;
}

int add(int a, int b, int c)    // define
{
    return a+b+c;
}

int add(int a, int b)    // define
{
    return a+b;
}


/* 


compiler searches for the function on the basis of name of the function. If it founds multiple functions with that name then compiler pick all of them and say them candidates

    There are 3 types to catch the same name functions - 
                                                            1. Exact Match
                                                            2. Type Promotion
                                                            3. Type Conversion

1.  Exact Match:-

    void f1(int);
    float f1(float);
    int x = 5;
    f1(x);


2.  Type Promotion:-

    void f1(int);
    float f1(float);
    char x = "A";
    f1(x);


3. Type Conversion:-    1. char  --> int
                        2. float --> double

    void f1(int);
    float f1(float);
    char x = "A";
    f1(x);


4.  But this is Error

    void f1(float);
    float f1(double);
    char x = "A";
    f1(x);

    Error because f1(x) here argument is char and cathing 
    arguments are float & double 
    

 */