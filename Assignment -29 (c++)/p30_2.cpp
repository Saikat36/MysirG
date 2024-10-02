

/*  open = _40__Constructor_And_Destructor_InInheritance_lyst7367.pdf     */  


                    /* Constructor & destructor in Inheritance */

#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        int age;
        char name[20];

    protected:
        void setAge(int a) { age = a; }
        void setName(char n[]) { strcpy(name,n); }

    public:
        Person(int a, char n[])     // Constructor in Parent Class 
        {
            age = a;
            strcpy(name,n);
        }
        ~Person()                   // Destructor in Parent Class
        {
            cout << "Destructor of Class Person" << endl;
        }
        int getAge() { return age; }
        char* getName() { return name; }
};

class Employee : public Person      //  User 2
{
    private:
        float salary;
    
    public: 
        Employee():Person(20,"Arjun")    // Constructor in Inheritance 
        {

        }
        ~Employee()                   // Destructor in Inheritance
        {
            cout << "Destructor of Class Employee" << endl;
        }

        void setEmployee(int a,char n[], float s)
        {
            setAge(a);      // Access protected data
            setName(n);     // Access protected data
            salary = s;     // Access field data
        }
};

int main()     
{
    Employee e1;    //  User 1 for class Employee
}