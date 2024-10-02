    
/* 
    With the "friend operator" it is possible to overload a binary operator in which left operator is not an object.

    example - i3 = 5 + i1;
 */

#include <iostream>
using namespace std;

class Item
{

    private:
        int a, b; // fields

    public:

        void setData(int x, int y) { a = x; b = y; }            // setData fun define

        void showData() { cout <<"\na = "<< a <<" b = "<< b << endl;}     // showData fun define

        friend Item operator+ (int , Item);  // Friend function decleare 
};

Item operator+ (int k, Item i)   // Friend function define 
{
    Item temp;
    temp.a =  k + i.a; 
    temp.b = i.b;   
    return temp;
}

int main()
{
    Item i1,i3;
    i1.setData(3, 5);

    i3 = 5 + i1;        // "+" == "operator+"
    i3.showData();

    cout << endl;
    return 0;
}


/* Explain :        i3 = 5 + i1;

        binary opertor overloading ar somoy left a thake caller object and right a thake jake argument hisab a pass korano hoi. 


        For an Example:   i3 =  i1 + 5; lakha hole explain korar sooy bola hobe, "i1" object "operator +" function ke call korlo and as a argument hisab a "int" value psss koralo and jeta "operator +" function return korlo seta store holo "i3" object a.

        i3 =  i1 + 5;   akhena kintu "+" operator or "operator +" function member function 



        kintu   i3 = 5 + i1; atar khetra "operator +" function jodi member function hoi tahole left a caller object thakte hobe jamon i3 =  i1 + 5; atar khetra chilo, kintu akena left a object nai so "operator +" function jodi member function hoi tahole ata possible noi "operator +" function ke define kora, tai ai khetra  "operator +" function ke member function na banea friend function banano hoache
        
 */