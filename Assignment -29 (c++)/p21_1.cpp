

                            /*  Friend Function  */


/* Friend Function needs an object to access it's properties or methods 
    
    jamon akena "f1" friend function "i1" object ke use kore "i1" ar property golo use korta pare

other rule:-

1. Friend Function Define time a "friend" keyword lagate nai , kintu decleare time a "friend" keyword use korta hoi

2. Friend Function Define time a memebership level orthat "Item::" lagate nai, karon friend to class ar member noi

3. "friend function" define class ar bayre hobe karon ata class ar member noi

4. "friend function" akta class er member hote pare and oi same "friend function" onno class er friend hota pare

*/

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

        friend void f1(Item);  // Friend Function decleare


    /*  "f1(i1)" a "f1" holo friend function, and "i1" holo 
        object , ai "i1" object ta catch korar jonno jamon 
        C programe a deleare time (int,int) likha hoto omni
        (Item) type likhta hobe  */
           
};

void f1(Item i)               // Friend Function define
{
    int c = i.a + i.b;
    cout << "\nSum is " << c << endl;
}

int main()
{
    Item i1;
    i1.setData(3, 5);
                            // "f1(i1)" a "f1" holo friend function, and "i1" holo object 
    f1(i1);                 // Friend Function call

    cout << endl;
    return 0;
}
