
/* 

                        Base Pointer


Pointer of a class can point to an object of any of the descendant class

    Class A
    {
        public:
            void f1()   {  cout << "f1 of A\n";  }
    };

    class B: public A 
    {
        public:
            void f2()   {  cout << "f2 of B\n";  }
    }


    int main()
    {
        A *p;
        Α ο1;
        P = &01;

        B 02; 
        P = &02;
    }


                        P = &01;   

Explain : আমরা আগেই পড়েছি pointer যে type হয় সেই টাইপের value রাখতে পারে। কিন্তু এবার কথা হল "A" class-er pointer - "p" , "A" class-er object - "o1" .

তাহলে এই "p" এর ভিতরে object = "o1" এর Address রাখা যেতে পারে, 
এইভাবে = P = &01; 



                        P = &02; 

Explain : আমরা আগেই পড়েছি pointer যে type হয় সেই টাইপের value রাখতে পারে। কিন্তু এবার কথা হল  "B" class-er object - "o2" , "B" class-er kono pointer nai.


kintu "A" class-er pointer "p", "B" class-er object ke point korta par6e. kintu "A" class-er pointer "p", "B" class-er "member function" golo ke access korta par6e na 

    
So now the question is - 

    Base class pointer can point to an object of any descendant class but can access only base class members. Why??

    Ans = Due to "Early binding", 

    "Early binding" p32.cpp te explain kora hoa6a 

 */