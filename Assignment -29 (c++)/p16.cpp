
/* member are 2 types - 
                        1. Instance members
                        2. Static members -> 
                                        1. static local variable          
                                        2. static member variable
                                        3. static member function
                        */

/* 

How to access "private static member variables"?

ans = "Instance Variables" golo ke jokon private banea daya hoi tokon "Instance Variables" golo ke access korar jonno amadika "Instance method / public method / member function-er" dorkar pore thik tamni "static member variable" golo ke "private" kore thakla sai "private static member variable" ke access korar jonno "static method" or "static member function" use kora hoi.

 */

/* Now let see "without object" how we can access "private static member variables" at line - 47,48 */


#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b; // Instance Variables , Instance = object
        static int k; // private static member variables | class Variable

    public:
        void set_a(int x) { a = x; }    // Instance method
        void set_b(int y) { b = y; }    // Instance method
        int get_a() { return a; }       // Instance method
        int get_b() { return b; }       // Instance method
        static void set_k(int m) { k = m; }   // static method // static member function
        static int get_k() { return k; }     // static method // static member function
};

int Item::k; //defining static member variable

int main()
{
    Item i1,i2;

    i1.set_a(5);
    cout<< "i1.a = " << i1.get_a() << endl;
    
    Item::set_k(10);  // "without object" we can store a "value" with the help of = "class name :: function name (value)" 
    cout<<"k="<< Item::get_k(); // "without object" we can print the "value" with the help of = "class name :: function name (value)" 

    cout<<endl;
    return 0;
}