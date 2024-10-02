
                            /*  Constructor Overloading  */
    
    /*   Constructor Overloading  =  Programmer can  provide multiple Constructor in the same class with different signature/ different argument

    Here c4 & c5 are Constructor Overloading 

    Constructor have 1 rule - Constructor kokono class ar bayra lakha hoina, 
    
    

                                /*  Copy Constructor -   1. Shallow copy 
                                                         2. Deep Copy        */  

                    /* Shallow copy vs Deep Copy difference nicha draw kora a6e  */                        
/* 
    example :-   
                
                Complex c7 = c1

    Jokon kono class-er object banano ho66a, R tokonoi oi somoyi class a present thaka kono object ke dea intinilise kora hola tokon copy constructor use hoa jai internally      */


#include <iostream>
using namespace std;
class Complex
{
    private:
        int a, b; // instance member variables

    public:

        Complex()   // Default Constructor
        {
            a = 0;
            b = 0;
        }
        Complex(int x)   // One parameter Constructor
        {
            a = x;
        }
        Complex(int x , int y)   // two parameter Constructor
        {
            a = x;
            b = y;
        }

        Complex(Complex &C)   // Copy Constructor  // "Complex c7 = c1;" or "Complex c7(c1);"
        {
            a = C.a;
            b = C.b;
        }

        void setData(int, int); // decleare function
        void showData();        // decleare function
        Complex add(Complex);   // decleare function
};


                /* Define every function here */

void Complex::setData(int x, int y)
{
    a = x;
    b = y;
}
void Complex::showData()
{
    cout << "\na=" << a << " b=" << b;
}
Complex Complex::add(Complex C)   //"Complex::" is memebership level
{
    Complex temp;                // temp is also object
    temp.a = a + C.a;
    temp.b = b + C.b;
    return temp;
}


int main()
{
    Complex c1(1,2), c2(3), c3 , c4(6), c5(3,6); // (c1,c2,c3) are obj but (c4,c5) are Constructor Overloading
    c1.setData(3, 4);
    c2.setData(5, 6);

                    /*          Copy Constructor 

                    Example :-  
                                Complex c7= c1 */

    Complex c7 = c1;    /*  "c1" object tar Constructor= "Complex(int x , int y)"
                            a 2 to argument pass korbe but "c7" akta object, jake
                            create korar somoyi class a present thaka kono object
                            ke dea intinilise kora hola tokon Copy Constructor use
                            hoa jai internally, tai kono error dekha jaina, 
                            jamon akhena:- "c1" object create kora a6a ager theka
                            tai "c7" name a akta object create kora holo and 
                            jokhon "c1" object dea intitilise koea holo tokoni
                            "Copy Constructor" use holo and ai "Copy Constructor"
                            as a argument hisabe pass koralo "c1" ke and ai
                            "Copy Constructor" ke call korlo "c7"

                            NOTE:- "Copy Constructor" toiri korar somoy tokoni 
                                    intitilise korta hobe present thaka object
                                    dea, pora korla hobena  
                            
                            "Complex c7(c1);" = same as = "Complex c7 = c1;"   */

    // c7 = c1;     this is call " Copy assignment operator "
    
    c3 = c1.add(c2);    /* "c1" is a caller object, he call his add method,
                           and pass c2 as an argument and what ever return 
                           it will store in c3 */

    c3.showData();
    c7.showData();

    cout <<"\n"<< endl;
    return 0;
}

                                /* Shallow copy vs Deep Copy */



    /*                                  shallow Copy

    
        shallow Copy  =  akta object ar modha ar akta object argument a pass korea 
                         dile, shallow copy call hoi automatically. 
                        
        NOTE:- Shallow copy crate korta hoina, Compliler nijar theka create kora    





        Complex c7 = c1;    ata holo shallow copy 

        Complex(Complex &C)  ata holo shallow copy defination // Copy Constructor 
        {
            a = C.a;
            b = C.b;
        }


                    c7                                
         _________________________                  
        |      a           b      |                 
        |    ____         ____    |                 
        |   |  3 |       |    |   |                 
        |   |____|       |____|   |                 
        |__________________|______|                 
                           |                        
                          _|__                      
                         |  4 |       <--------------------              
                         |____|                           |
                                                          |
                                                          |
                                                   c1     |
                                         _________________|_______
                                        |      a          | b     |
                                        |    ____         ____    |
                                        |   |  3 |       | 4  |   |
                                        |   |____|       |____|   |        
                                        |_________________________|
                                                            



        Explaination :- c1 ar data c7 a copy ho66a as it is , c1 a kono value change
                        korle c7 a oi value ta change hoa jabe .

                        akhena dekha ja66a "c1" ar value golo copy korar jonno 
                        "c7" a alada kore kono memory create ho66a na. c1 ar 
                        data c7 a as it is copy ho66a. ata ke bola Shallow copy


     */


    /*                                  Deep Copy
                                        
    
        Deep Copy  =  akta object ar modha ar akta object argument a pass korea 
                      dile, Deep copy call hoina. ota alada kore create korta hoi
                        

        NOTE:- Deep copy nijar theka create hoina, Deep copy korta gela nijaka
               "copy constructor" banate hobe    


        
                    c7                                
         _________________________                  
        |      a           b      |                 
        |    ____         ____    |                 
        |   |  3 |       |    |   |                 
        |   |____|       |____|   |                 
        |__________________|______|                 
                           |                             _____
                          _|__                          |  4  |
                         |  4 | ----------------------> |_____|              
                         |____|                           
                                                          ^
                                                          |
                                                   c1     |
                                         _________________|_______
                                        |      a          | b     |
                                        |    ____         ____    |
                                        |   |  3 |       |    |   |
                                        |   |____|       |____|   |        
                                        |_________________________|
                        
                        
        Explaination:-  akhena dekha ja66a "c1" ar "b" value akta address a 
                        point korche, oi address ar value ta direct "c7.b" a 
                        copy ho66ana, oi address tar jonno c7 a alada kore
                        memory crete ho66a DMA use kore, ai DMA use kore 
                        create houa memory tai "c1.b" ar value store ho66a



    Deep copy defination :- 

            Complex(Complex &C)   // Copy Constructor 
            {
                a = C.a;
                b = malloc(4);
                *b = *(C.b);
            }


*/