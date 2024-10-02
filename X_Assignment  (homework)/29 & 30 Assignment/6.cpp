


/* 6. Define a function to swap data of two int variables using call by reference */


#include <iostream>
using namespace std;

void f6(int &x, int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "x = " << x << " , y = " << y << endl; 
}

int main()
{
    int x,y;
    cout << "Enter two No ";
    cin >> x >> y;
    f6(x,y);
    return 0;
}