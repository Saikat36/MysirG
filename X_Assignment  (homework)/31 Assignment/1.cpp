

/*  1. Define a function to sort an array of integers in ascending or descending order depending on bool type argument (true for ascending and false for descending). Use default argument to implement it.  */

#include <iostream>
using namespace std;

void sortArray(int arr[], int size, bool ascending = true)
{
    int temp;

    if (ascending)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main()
{
    // Example usage
    int arr[] = {4, 5, 2, 8, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << "\n";
    sortArray(arr, size); // Sort in ascending order
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortArray(arr, size, false); // Sort in descending order
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
