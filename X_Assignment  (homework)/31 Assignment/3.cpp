

/* 3. Define a function to rotate an array by n positions in the d direction. Implement position and direction using default arguments. Argument d can be -1 or 1 denoting left or right direction. Argument n should be the last argument with default value 1.   */

#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int n = 1, int d = 1)
{

    if (d == 1)
    {
        while (n)
        {
            // Rotate right
            int temp = arr[size - 1];
            for (int j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = temp;
            n--;
        }
    }
    else
    {
        while (n)
        {
            // Rotate left
            int temp = arr[0];
            for (int j = 0; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = temp;
            n--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "\nArray Size is :- " << size << "\n"  << endl;

    rotateArray(arr, size, 1); // Rotate array by 2 positions to the right (default direction)

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;

    rotateArray(arr, size, 3, -1); // Rotate array by 2 positions to the left

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;

    return 0;
}
