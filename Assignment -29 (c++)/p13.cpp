
                            /* class & object in C++  */

/* There are 2 type to apply Encapsulation - 
                                            1. using struct
                                            2. using class  */

/* structure - In structure by-default all member specifier are public
   class -  In class by-default all member specifier are private if we not specify */

/* Feature of Class:-

                1. Class is a group of variables, function and operators(+,-,*,/)
                2. Class is a keyword to create a castom data-Type
                3. Class is a descript of an object
                4. class provide a blueprint of an object
                5. class is a way to implement concept of encapsulation */


#include <iostream>
using namespace std;        // Encapsulation using class 

class Book
{
    private:                // access specifiers 
    
        int bookid;
        char title[20];
        float price;

    public:                // access specifiers

        void displayBook() // Member Function
        {
            cout << bookid << "  " << title << "  " << price << endl;
        }
        void inputBook() // Member Function
        {
            cout << "Enter bookid, title and price: ";
            cin >> bookid;
            if (bookid < 0)
            {
                bookid = -bookid;
            }
            cin.ignore();           // fflush(stdin);
            cin.getline(title, 20); // fgets(title,20,stdin);
            cin >> price;
        }
};

int main()
{
    Book b3;    // Book = Class,  b3 = object
    
    b3.inputBook();
    b3.displayBook();

    return 0;
}