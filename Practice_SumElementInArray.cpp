#include <iostream>
using namespace std;

int findElementIndex(int array[], int size);

int main()
{
    int size;
    cin >> size;

    int array[size];

    // Input elements of the array
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // Find the index of the element that is half of the total sum
    int index = findElementIndex(array, size);

    if (index != -1)
    {
        cout << "Index " << index << " has the sum" << endl;
    }
    else
    {
        cout << "No index has the sum" << endl;
    }

    return 0;
}

// Function to find the index of the element that is half of the sum of the array
int findElementIndex(int array[], int size)
{
    int totalSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < size; i++)
    {
        totalSum += array[i];
    }

    // Check if any element is half of the total sum
    for (int i = 0; i < size; i++)
    {
        if (array[i] == totalSum / 2)
        {
            return i; // Return the index of the element
        }
    }

    return -1; // Return -1 if no such element is found
}