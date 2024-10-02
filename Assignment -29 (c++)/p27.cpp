
    
                      /* Object Pointer */

/* 

    Object Pointer = akta pointer jodi class type ar hoi and oi pointer ta 
                     jodi akta object-er address contain kora tahola take 
                     object pointer bola



        complex c1;
        complex *p;

        p = &c1;    // Here "p" is a Object Pointer

        p->a;       //  c1.a        //  (*p).a
        p->b;       //  c1.b        //  (*p).b


    Here "p" pointer point "c1" object , So akon "p" ar modha "instance member = a, b" a6e , 
    so ai "a , b" ke pointer variable dea access korta gela "pointer_name -> member_name" 
    use korta hoi , jamon =  p->a;  p->b; 



                               c1
                      _________________________
       p             |      a           b      |
     ____            |    ____         ____    |
    |    | ------>   |   |    |       |    |   |
    |____|           |   |____|       |____|   |        
                     |_________________________|
                        

    Object Pointer = A pointer of class type which contains 
                     address of an object is object pointer

      example = complex *p;  here *p is class type pointer 

 */