#include <iostream>
using namespace std;

int linearSearch(int[], int, int);
void insertElement(int[], int &size, int, int);

int main()
{
    const int CAPACITY = 100;             // Maximum capacity of the array
    int sid[CAPACITY] = {1, 3, 6, 8, 10}; // Initialized array
    int size = 5;                         // Current size of the array

    int idCount;
    cout << "Enter how many user ids need to be inserted: ";
    cin >> idCount;

    int newID;
    cout << "Enter ID number: ";
    for (int i = 0; i < idCount; i++)
    {
        cin >> newID;

        // Check if the Student ID already exists
        int index = linearSearch(sid, size, newID);
        if (index != -1)
        {
            cout << newID << " found at position " << index << endl;
        }
        else
        {
            // Insert the new ID in sorted order
            insertElement(sid, size, CAPACITY, newID);
            cout << newID << " not found" << endl;
            cout << newID << " inserted into the array" << endl;
        }
    }
    cout << "The array with all the elements inserted are: ";
    for (int i = 0; i < size; i++)
    {
        cout << sid[i] << " ";
    }
    cout << endl;

    return 0;
}
// Function to find the position of an element in a sorted array
int linearSearch(int sid[], int size, int newID)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (sid[mid] == newID)
        {
            return mid; // Found the element
        }
        else if (sid[mid] < newID)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1; // Element not found
}
// Function to insert an element into a sorted array
void insertElement(int sid[], int &size, int CAPACITY, int newID)
{
    if (size == CAPACITY)
    {
        cout << "Array is full." << endl;
    }

    int i;
    for (i = size - 1; i >= 0 && sid[i] > newID; i--)
    {
        sid[i + 1] = sid[i]; // Shift elements to the right
    }
    sid[i + 1] = newID; // Insert the new element
    size++;             // Increment the size
}