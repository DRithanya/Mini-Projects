#include <iostream>
using namespace std;

void selectionSort(int array[], int SIZE);
int removeDuplicates(int array[], int SIZE);

int main()
{
    int const SIZE = 10;
    int array[SIZE]; // Array to store up to 10 numbers

    // Get exactly 10 elements of the array from the user
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }

    // Step 1: Sort the array
    selectionSort(array, SIZE);

    // Step 2: Remove duplicates from the sorted array
    int newSize = removeDuplicates(array, SIZE);

    // Step 3: Display the sorted array without duplicates
    cout << "Merged array is:" << endl;
    for (int i = 0; i < newSize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to sort the array in ascending order using Selection Sort
void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                // Swap elements
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Function to remove duplicates from a sorted array
int removeDuplicates(int array[], int size)
{
    if (size == 0)
        return 0;

    int uniqueIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] != array[uniqueIndex])
        {
            uniqueIndex++;
            array[uniqueIndex] = array[i];
        }
    }
    return uniqueIndex + 1; // Return the new size of the array without duplicates
}