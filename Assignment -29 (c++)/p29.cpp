

            /*                    D M A  on  C++                         */


/* Accoding to scope there are 5 type of variable 

      1. Global Variable
      2. Local Variable
      3. Instance Variable
      4. Static Member Variable
      5. Static Local Variable            

      NOTE:- This all variable aplicable for "All SMA varable" 
             this varable are not aplicable for "DMA varable"
*/
/*  

     1. Static Memory Allocation = Static Memory Allocation দিয়ে তৈরি হওয়া মেমোরি গুলোতে ডেটা টাইম মেনশন থাকে। তাই সেটাই কত মেমোরি পাবে আগের থেকে Compile Time a ডিসাইড হয়ে যায় কিন্তু যতক্ষণ না  রান  হয় ততক্ষন অব্দি মেমোরি পায় না.

Static Memory Allocation Example = int a, float b, int *p, struct book b1, complex c1, complex *ptr 

     2. Dynamic Memory Allocation = অন্যদিকে Dynamic Memory Allocation দিয়ে তৈরি মেমোরিগুলো কোন "Data Type" মেনশন থাকেনা তাই সেটা কতটা মেমোরি পাবে জানা যায় না সেটা যতক্ষণ না রান হয় .
Dynamic Memory Allocation Example = malloc(),calloc()


      NOTE:-  SMA & DMA, 2 ক্ষেত্রেই মেমোরি পাইনা যতক্ষণ না রান হয় , কিন্তু SMA variable গুলোর ক্ষেত্রে আগে থেকে জানতে পারা যায় কতটা সে জায়গা নেবে তাই SMA variable গুলো কে "Declaration statement" বলে এবং DMA variable গুলোর ক্ষেত্রে যতক্ষণ না রান হয় ততক্ষণ কিছু জানতে পারা যায় না তাই DMA variable গুলো কে "Action statement" বলে
      
*/

/* C++ এ DMA te = new এবং delete কনসেপ্ট এসেছে , ja nicha DMA on C++ a discusss kora a6e */

/* 
Akta programe jokon run hoi tokon 4 ta memory allocate hoi - 

    1. stack = static memory(int a, float b, int *p, struct book b1, complex c1, complex *ptr)
    2. Heap = Dynamic memory allocation somoy je memory pai using - calloc(), malloc()
    3. Data = Global variable & static variable er jonno
    4. Instruction = Instruction dayar joono use hoi
 */



#include <iostream>
using namespace std;

class MyClass 
{
      public:
            static int static_member_var; // static member variable
};

int MyClass::static_member_var = 0; // initialize the static member variable

int main() 
{      
    static int static_local_var = 42; // static local variable
    cout << "static_local_var = " << static_local_var << endl;

    MyClass::static_member_var = 5;
    cout << "static_member_var = " << MyClass::static_member_var << endl;

    return 0;
}



/*                      Memory leak                     */


/* 

      int* f1()
      {
            int *p;
            p = malloc(4);
            return p;
      }

      int main()
      {
            int *ptr;
            ptr = f1();
      }

                      _________________________
                     |      p          malloc  |
                     |    ____         ____    |
                     |   |    | ----> |    |   |
                     |   |____|       |____|   |        
                     |                         |
                     |    ____          ^      |
                     |   |    | ________|      |
                     |   |____|                |
                     |     ptr                 |
                     |_________________________|
 */





                  /*      D M A       */

/* 

      C programming a akta mistake ho66ilo DMA variable golor khetra

      Example - 

      int* p;
      p = malloc(5);

      malloc দিয়ে তৈরি মেমোরি ব্লকটায় পরপর পাঁচটা ব্লক ক্যাপচার করেছে কিন্তু SMA Variable দিয়ে তৈরি pointer varable টা অর্থাৎ int* p টা শুধুমাত্র প্রথম চারটে ব্লকের Address রাখতে পারছে । আর ঐ লাস্টের ব্লকটার অ্যাড্রেস রাখা যাচ্ছে না তাই ওই মেমোরিটা use করাও যাচ্ছে না। এক কথায় Memory Leak হচ্ছে। এই Mistake থেকে বাঁচার জন্যই C++ এ new এবং delete কনসেপ্ট এসেছে।

 */

/*                   D M A  on C++ 
   


                                                p
    1.    int *p = new int;                     ☐ ---→  ☐
          delete p;
      
Explain:- int *p হল SMA pointer Variable যার মধ্যে Address রাখা আছে DMA Variable-এর । এই DMA Variable tai "new" holo "Operator" and tar sathe "Data Type" add kora DMA Variable ta create kora holo . 

"delete p" যখন লেখা হচ্ছে তখন SMA pointer Variable ta টা "Release" ho66ena, SMA pointer Variable টা যে DMA Variable এর Address store করে রেখেছে সেই Address ta "Release (free,মুক্তি)" ho66e.  
                                          

    2.    complex *q = new complex;  // new complex()          
          delete q;

          
                               
                      _________________________
       q             |      a           b      |
     ____            |    ____         ____    |
    |    | ------>   |   |    |       |    |   |
    |____|           |   |____|       |____|   |        
                     |_________________________|
                        



    3.    float *ptr = new float[5]; 
          delete []ptr;   
          

                  ptr        
                  ☐---> ☐☐☐☐☐

      ptr a proti ta block ke access kora jabe *(ptr+i) or ptr[i] মাধ্যমে

 */