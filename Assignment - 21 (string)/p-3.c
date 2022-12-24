

/* Find Length of the String */

/* fgets function er niyom -

    1. fgets(str,20,stdin) akena jamon 20 ta character pass kora hoa6a but akena jabe 18 ta character & 19th no line a tha6a new line & last 1 tai null character ('\0') jabe

    2. Tai jokon length bar korar jonno fgets function use kora hoi tokon kintu oi new line ar jaigai null character ('\0') alada vabe store korta hoi

    3.     str[strlen(str) - 1] = '\0';    Ai line tar kaj holo 

    0  1  2  3  4  5  6   7                   0  1  2  3  4  5  6  
    s  a  i  k  a  t  \n  \0       =>         s  a  i  k  a  t  \0              */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i;

    printf("Enter your name: ");

    fgets(str, 20, stdin);

    str[strlen(str) - 1] = '\0';
    i = strlen(str);
    printf("Length of %s is %d", str, i);

    printf("\n\n");
    return 0;
}