#include <iostream>
using namespace std;

int linearSearch(int[], int, int);
void displayArray(int[], int);

int main()
{
    int const SIZE = 10;                                 // const array size
    int list[] = {12, 2, 7, 48, 10, 23, 67, 95, -3, 52}; // array defined with elements
    int key;                                             // variable in int data type

    // prompting user to enter any element
    cout << "Enter a key to be found in the array: ";
    cin >> key;

    cout << endl; // spacing

    // Execution of messages based on function call return
    if (linearSearch(list, SIZE, key) == -1)
    {
        // display message for when element is not found
        cout << "The key element was not found in the array." << endl;
    }
    else
    {
        int spot = linearSearch(list, SIZE, key);
        // display message for when element is found
        cout << "The key element was found at index " << spot << "." << endl;
        // deleting that element in the array
        for (int i = spot; i < SIZE; i++)
        {
            list[i] = list[i + 1];
        }
        // function call to display the array after deleting key element
        displayArray(list, SIZE);
    }

    return 0;
}
// function takes array, array size, and user input for key as inputs and returns the index (if key is found) and -1 (if its not)
int linearSearch(int list[], int SIZE, int key)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (list[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// function takes in array and array size as inputs and displays all elements in the array after key element is deleted
void displayArray(int list[], int SIZE)
{
    cout << endl;
    cout << "The elements in the array after deleting key are:" << endl;
    for (int i = 0; i < SIZE - 1; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}