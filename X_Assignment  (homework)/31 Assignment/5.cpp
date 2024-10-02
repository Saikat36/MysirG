

/* 5. Define a function to print all the prime factors of a given number. [ for example num=36, prime factors are 2, 3] */



#include <iostream>
using namespace std;

void printPrimeFactors(int num) {
    // Print all the 2's that divide num
    while (num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }

    // Check for odd prime factors up to the square root of num
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }

    // If num is still greater than 2, it must be a prime factor
    if (num > 2) {
        cout << num << " ";
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Prime factors of " << num << " are: ";
    printPrimeFactors(num);
    cout << endl;
    return 0;
}

