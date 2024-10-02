


/* Static member variable is a "class-variable" not a "object-variable", orthat jodi main function a object nau banano hoi tau class a jodi static member variable thake tokon without object oi class a thaka static member variable ke access kora jeta pare  */

/* Instance Variables is a "object-variable", so without object it is not possible to access Instance Variables */

#include<iostream>
using namespace std;
class Item
{
    public:
        int a,b; // Instance Variables , Instance = object
        static int k; // static member variable | class Variable
};

int Item::k; //defining static member variable or static class variable

int main()
{
    Item::k = 10;   // without "object" I can access "static member variable" or "static class variable", and also you can see "without object" we can store a "value" with the help of = class name "Item" and the "static variable" name "k", and when we initialize "10" in that "variable" we just use "class name :: static variable name = value" like "Item::k = 10", but when "static member variable" is in "public", if "static member variable" are in "private" then it's not possible to access it from here. if you want to access "private static member variable" then go checkout "p16.cpp"

    cout<<"k="<<Item::k;
    
    cout<<endl;
    return 0;
}