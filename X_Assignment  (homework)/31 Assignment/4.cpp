

/* 4. Define a function to calculate LCM of three numbers. */

#include <iostream>
using namespace std;

int lcm(int a, int b, int c)
{
    int i;
    for (i = a>b?a>c?a:c:b>c?b:c; i <= a*b*c ; i++)
    {
        if (i%a==0 && i%b==0 && i%c==0)
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "LCM of " << num1 << ", " << num2 << " and " << num3 << " is: " << lcm(num1, num2, num3) << endl;
    return 0;
}
