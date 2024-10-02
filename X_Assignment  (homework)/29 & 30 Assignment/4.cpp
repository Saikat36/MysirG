


/* 4. Define a function to print Pascal Triangle up to N lines. */



#include <iostream>
using namespace std;

void printPascalTriangle(int N) {
  int triangle[N][N];

  // Initialize the first column with 1
  for (int i = 0; i < N; i++) {
    triangle[i][0] = 1;
  }

  // Fill the rest of the triangle
  for (int i = 1; i < N; i++) {
    for (int j = 1; j <= i; j++) {
      triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
    }
  }

  // Print the triangle
  for (int i = 0; i < N; i++) {
    // Print spaces to center the triangle
    for (int j = 0; j < N-i-1; j++) {
      cout << " ";
    }
    // Print the values of the row
    for (int j = 0; j <= i; j++) {
      cout << triangle[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int N;

  cout << "Enter the number of lines of Pascal's Triangle to print: ";
  cin >> N;

  printPascalTriangle(N);

  return 0;
}



/* 

#include <iostream>
using namespace std;

int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) 
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void printPascalTriangle(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
            cout << binomialCoeff(line, i) << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of lines for Pascal's Triangle: ";
    cin >> n;
    printPascalTriangle(n);
    return 0;
}


 */