


/*    Early Binding  and  Runtime Polymorphism  and  Late Binding  and  Virtual Function             */



/*                              Early Binding

Early Binding : "Early Binding" a pointer je class a belong kora sai Class a upor depend kore function ke khuja hoi 

example =    

        User *ptr;
        ptr->Show();

    akhena jamon "ptr" pointer "show()" name ar function ke call kor6a, jokon call hobar por "ptr" ar type check hobe, "ptr" type holo "User" type ar, tai 1st a "User" class a jabe okena khujbe "Show()" name a kono function a6e kina.Jodi okena "Show()" name ar kono function pai jai tahola seta run hoa jabe , ar jodi okena "Show()" name ar function present na thake tahole tar parent class a jabe , then okena function ta khuja pela seta run orea dibe

NOTE:-  ai puro "Early Binding" ar process ta "compile time" a hoi


---------------------------------------------------------------------------------------


        Runtime Polymorphism    +   Late Binding    +   Virtual Function


Late Binding : "Late Binding" a pointer kon class a belong kora sai type ar upor depend kore function ke khuja hoina, pointer je function ke point kore sai function ar "class type" ke dekha oi class gea  function ta ke khuja hoi

example = 

        User *ptr;
        ptr = new Admin;
        ptr->Show();

    Akehna jamon "ptr" class type holo "User" type ar, kintu akhena "class type" ke dekha oi class a gea function ta ke khuja hoina , akhena dekha hobe "ptr" jake point kor6a tar class type jeta hobe sai class a gea ai "Show()" function ta ke khuja hobe, 

    jamon akhena =  1. "ptr" class type holo "User" type ar 
                    2. "ptr" ar modha "Admin" class ar address store kora holo
                    3. "ptr->Show()" , ai line ta jokon compiler dekhlo tokon compiler 1st a "ptr" ar class type dekhlo, compiler dekhlo "ptr" ar class holo "User", tai 1st a user a galo then okena gea "Show()" function ta ke khujlo but okena deklo "Show() name a akta function" a6e kintu ai "Show() function ta virtual function", tai Compiler ai "show() function" ta ke "Compile time" a Compile korlo na. Copiler bujha galo "Show()" function ta "Early Binding" hobena, ata "Late Binding" hobe. tai Coompiler "ptr" pointer ar type ke ignore korbe and dekhbe "ptr" pointer kar address ke store rekha6a, Compiler jokon dekhbe  "ptr = new Admin" ai line ta tokon bujhe jabe "ptr" pointer "Admin" name ar class ar address ke rekha6a, then Compiler "Admin" class a jabe and sekhana gea "Show()" function ta ke khujbe and  jokon ai "Show()" function ta okena pai jabe tokon ota run korea dibe. 

NOTE:-  Ai je "virtual" function ar jonno compiler "Show()" function tar "Late Binding" korlo ai "Late Binding" puro process ta "Runtime" a holo, tai ai procress ke "Runtime Polymorphism" bole.

*/

/*
Virtual Function = 
                    A function is in a class, prefix with virtual keyword is called as Virtual Function     
*/


#include<iostream>
using namespace std;

class User
{
    public:
        virtual void Show()  { cout << "Show of User\n"; }   // Virtual Function
};

class Admin: public User
{
    public:
        void Show()  { cout << "Show of Admin\n"; }
}; 


class Learner: public User
{
    public:
        void Show()  { cout << "Show of Learner\n"; }
}; 


int main()
{
    User *ptr;

    ptr = new Admin;    // Admin class-er "Show()" function run hobe
    ptr->Show();
    
    ptr = new Learner;  // Learner class-er "Show()" function run hobe
    ptr->Show();

    return 0;
}
