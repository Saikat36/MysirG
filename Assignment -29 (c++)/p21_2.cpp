
            /*          Operator Overloading in Friend Function 
                                        + 
                    Unary Operator Overloading in Friend Function       */

#include <iostream>
using namespace std;

class Item
{

    private:
        int a, b; // fields

    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void showData()
        {
            cout << "\na = " << a << " , b = " << b << endl ;
        }
        friend Item operator-(Item); // Unary Operator Overloading in Friend Function decleare
        friend Item operator+(Item,Item);  // Operator Overloading in Friend Function decleare
};


Item operator+(Item X, Item Y)   // Operator Overloading in Friend Function define
{
    Item temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}

Item operator-(Item i) // Unary Operator Overloading in Friend Function define
{
    Item temp;
    temp.a = -i.a;
    temp.b = -i.b;
    return temp;
}

int main()
{
    Item i1,i2,i3,i4;
    i1.setData(3, 5);
    i2.setData(9,4);
    i3 = i1 + i2;   // i3 = operator+ (i1,i2) // Operator Overloading in Friend Function
    i3.showData();   
    i4 = -i3 ;      // i4 = operator- (i3);  
    i4.showData();                           
    cout << endl;
    return 0;
}

/* 

        i3 = i1 + i2;   

    explaination :- operator+ function call holo and argument hisab a i1 & i2 ke 
                    pass koralo, operator+ jeta return korlo seta store holo i3 te 

 */