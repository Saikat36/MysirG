

/* 
    Insertion operator ( “<<” ) and Extraction operator ( “>>” ) operator overloading 

-------------------------------------------------------------------------------------------

    "istream & ostream" ai 2 to holo class, ar class theka object banano possible,
    kintu "istream & ostream" class golo in-excusable & ai class a dirct objecct banata
    parbona, tai ai class goloi object na banea "object reference" banata hobe. 

    ager example akta nilam p21_2.cpp theka - 


        i3 = i1 + i2;   // i3 = operator+ (i1,i2) // Friend function call
        
        friend Item operator+(Item,Item);  // Operator Overloading in Friend Function decleare  
        
        Item operator+(Item X, Item Y)   // Operator Overloading in Friend Function define
        {
            Item temp;
            temp.a = X.a + Y.a;
            temp.b = X.b + Y.b;
            return temp;
        }

    Explaintion :- akhena operator+ function ar argument a "2 to Item class-er object" pass
                    korano holo. 

---------------------------------------------------------------------------------------------


        cin >> i1;    akhena "cin" akta object jeta define a6e "istream class" er modha.

        "istream" class a kothau na kothau (int,float,double) data type ar jonno code a6e,
        jegolo decleare a6e ai vabe -

        istream istream::operator>> (int)               
        istream istream::operator>> (float)               
        istream istream::operator>> (double)  

        kintu kothau " istream istream::operator>> (Item) " decleare nai, karon ata amr 
        banano nijar data type, tai ai Item type ar deta ke catch korar jonno alada kore
        function define korta hoi ai vabe - 
        
        Item operator+(Item X, Item Y)            
        {
            Item temp;
            temp.a = X.a + Y.a;
            temp.b = X.b + Y.b;
            return temp;
        }

-------------------------------------------------------------------------------------------

ebar jokon "cin >> x >> y " kora hoi tokon -
    
    1st "cin >> x" ar Explaintion -

        "cin" object Extraction operator ("opertor >>") ke call kora6a & argument a
        " x er reference (&x)" ke pass korea6a, and "opertor >>" return kora6e
        "istream object-er reference (istream&)" 


    2nd  "cin >> y" ar Explaintion - 

        je "istream object-er (istream&) " reference return hoa alo seta abr Extraction
        operator ("opertor >>") ke call kora6a & argument a " y er reference (&y)" ke pass 
        korea6a, and "opertor >>" return kora6e "istream object-er reference (istream&)"  

 */

#include <iostream>
using namespace std;

class Item
{

    private:
        int a, b;   // fields

    public:

        friend istream& operator>> (istream & , Item &);    //   " >> "
        friend ostream& operator<< (ostream & , Item );    //    " << "
};

istream& operator>> (istream &x, Item &i)        // explain upora kora a6e
{
    x >> i.a >> i.b;        // x = cin  
    return x;
}

ostream& operator<< (ostream &y, Item i)        // explain upora kora a6e
{
    y << "a = " << i.a << " , b =  "<< i.b << endl;     // y = cout 
    return y;
}

int main()
{

// istream &x = cin;  // "type dev" jekono "deta type" ke rename korar প্রক্রিয়া
                     // jamon istream &x = cin; atai "cin" onno name holo "x"
    Item i1;

    cout << "Enter an item: ";

    cin >> i1;      //    ">>" operator == "operator>>"

    cout << i1;

    cout << endl;
    
    return 0;
}


/* 
    cin >> i1;  atai - 

              operator >> (cin,     i1)
                            ^        ^
                            |        |
            Data Type -   istream , Item
 */
