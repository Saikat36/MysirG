
/* member are 2 types - 
                        1. Instance members
                        2. Static members -> 
                                        1. static local variable          
                                        2. static member variable
                                        3. static member function
                        */

/* Static member variable - joto khon static member variable define orthat "int Item::k;" ai vabe bayre define na kora hobe toto khon kono memory pabena orthat class-er bayra "static member variable define" kortai hobe nahola error asbe */

/* on "p15.cpp" without creating any "object" how can I access "static member variable" or "static class variable" */

#include<iostream>
using namespace std;
class Item
{
    public:
        int a,b;       // Instance member Variables , Instance = object
        static int k;  // static member variable | class Variable
    public:
        void showdata();  // function declearetion
};

int Item::k; //defining static member variable

void Item::showdata() //function defining Instance member function outside of the class
{
    //static int y;  // static local variable 
    cout<<"\n Hi I am Calling from outside of a class\n"<<endl;
}


int main()
{
    Item i1,i2;
    i1.a = 5;
    cout<<"i2.a = "<<i2.a<<endl;
    i1.k = 10;    // static member 1 bar create hoi tai "i1.k" dea static member variable value change kora dea "i2.k" dea print korla same value diba
    cout<<"k="<<i2.k;
    cout<<endl;
    return 0;
}



/* 


            C / C++ Memory consumtion 

             _________________________
            |                         |
            |         Stack           |   <-- Local variable memory pai stack ar modha 
            |_________________________|
            |                         |  
            |         Heap            |   <-- DMA variable memory pai Heap ar modha 
            |_________________________|       
            |                         |   
            |         Data            |   <-- static local variable memory pai Data ar modha
            |                         |   <-- static global variable memory pai Data ar modha 
            |_________________________|           
            |                         |           
            |      Instruction        |   <-- Instruction thake ar modha        
            |_________________________|
            


 */