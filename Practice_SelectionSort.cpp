#include <iostream>
using namespace std;

void selectionSort(double list[], int size);

int main()
{
    int size;
    cin >> size; // Get the size of the array

    // Using a fixed-size array (for simplicity, assuming max size is 1000)
    const int MAX_SIZE = 1000;
    if (size > MAX_SIZE)
    {
        cout << "Size exceeds maximum limit of " << MAX_SIZE << endl;
        return 1; // Exit if the size is too large
    }

    double list[MAX_SIZE]; // Fixed-size array, size determined by user input

    // Read the elements into the array
    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
    }

    // Perform Selection Sort on the array
    selectionSort(list, size);

    // Output the sorted array
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to perform Selection Sort on the array
void selectionSort(double list[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // Find the index of the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (list[j] < list[minIndex])
            {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }
        // Swap the found minimum element with the element at index i
        if (minIndex != i)
        {
            double temp = list[i];
            list[i] = list[minIndex];
            list[minIndex] = temp;
        }
    }
}