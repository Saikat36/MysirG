
                        /* Encapsulation  and  Data Hiding  and  Abstraction */


            /* Structure in C++  -->  Encapsulation */
/*                 |                      |                                         */
/*           1. Property           1. Property = fields = Data Member = attributte   */
/*                                 2. Methods = Member Function = Service = Procedure */


/* 1. Encapsulation = Encapsulation is makeing a group of property and method */

/* 2. Data Hiding   = Data Hiding is not allowing you to use some of Data members 
                      of the structure by making them "private", 
                      exp = b3.bookid korta parbona but b3.inputBook() korta parbo */

/* 3. Abstraction   = Abstraction is hiding Implemention detail any Member Function //  
                      একবার ভেবে নেয়া যাক আমি কোনো বড়ো project এ কাজ করছি , 
                      সেখানে অন্য কোনো Employee একটা structure এর মধ্যে ২ টো 
                      Member Function বানিয়েছে "inputBook() and displayBook()" নাম এ। 
                      কিন্তু , আমি সেটা দেখতে পাবনা কি ভাবে বানানো আছে।  
                      আমার কাজ  " main() function  এ  inputBook()  and displayBook() " 
                      সেটা নিয়ে কাজ করা। আমি জানি inputBook() call করলে 
                      bookid, title and price এগুলো দিতে হবে and displayBook() call করলে
                      যে যে bookid, title and price দিলাম, ওগুলোর output দেখাবে। এই যে 
                      " Member Function "  টা কে Hide করা রাখা এটা কে বলে Abstraction   */
                      

/* Encapsulation Rules -
                1. use of struct keyword is optional
                2. structure can have functions too as members
                3. use of access specifiers for the members of structure  */

/* There are 2 type to apply Encapsulation - 
                                            1. using structure
                                            2. using class  */
                                            
/* structure - In structure by-default all member specifier are public
   class -  In class by-default all member specifier are private if we not specify */

/* Here I use "structure"  */

#include <iostream>
using namespace std;
struct Book                 // Encapsulation using struct
{
    private:                // access specifiers 
    
        int bookid;         // Property
        char title[20];     // Property
        float price;        // Property

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
    Book b3;
    
    b3.inputBook();  /* using Abstraction, if any user can use 
                        inputBook() function using ".inputBook()" 
                        but he cann't see how the "input()" function work */
    b3.displayBook();

    return 0;
}