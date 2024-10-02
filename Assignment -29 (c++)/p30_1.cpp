

/* 
        User 1  =  কোন Class থেকে যে object বানাচ্ছে সে হচ্ছে  User 1 

        User 2  =  যে Parent Class থেকে Child Class বানাচ্ছে সে হচ্ছে User 2

*/

                /*                  Visibility Mode                         */


/*                     private              protected                public

    User 1           Inaccessible          Inaccessible             Accessible
    
    User 2           Inaccessible          Accessible               Accessible

*/

/* 
    নিচের Example টাই দেখানো হয়েছে যে Person নামে যে Class রয়েছে , সেটাতে কিছু ডেটা Protected আছে। এই Protected Data [setAge(int a) and setName(char n[])]  কে  User 1  এবং  User 2  এর মধ্যে কে কে Access করতে পারছে সেটা দেখানো হয়েছে 
 */


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
        int getAge() { return age; }
        char* getName() { return name; }
};

class Employee : public Person      //  User 2    // "public" is the Visibility Mode
{
    private:
        float salary;
    
    public: 
        void setEmployee(int a,char n[], float s)
        {
            setAge(a);      // Access protected data
            setName(n);     // Access protected data
            salary = s;     // Access field data
        }
};

int main()     
{
    Person p1;      //  User 1 for class Person
    Employee e1;    //  User 1 for class Employee
}