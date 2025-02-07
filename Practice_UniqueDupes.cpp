#include <iostream>
using namespace std;

void eliminateDuplicates(int[], int);

int main()
{
    int const SIZE = 10; // max size of array
    int userArray[SIZE]; // array definition

    // Prompt user to enter the 10 integers to be stored in array
    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> userArray[i];
    }

    eliminateDuplicates(userArray, SIZE);

    return 0;
}
void eliminateDuplicates(int userArray[], int SIZE)
{
    int newList[SIZE]; // Array to store distinct integers
    int count = 0;     // Count of distinct integers

    // Iterate through the input array
    for (int i = 0; i < SIZE; i++)
    {
        int j;
        // Check if the current element is already in the distinct array
        for (j = 0; j < count; j++)
        {
            if (userArray[i] == newList[j])
            {
                break; // Break if the element is already in the distinct array
            }
        }
        // If the loop completes without breaking, the element is not a duplicate
        if (j == count)
        {
            newList[count] = userArray[i];
            count++;
        }
    }
    // Displaying the results
    cout << "The number of distinct integers is " << count << endl;
    cout << "The distinct integers are ";
    for (int i = 0; i < count; i++)
    {
        cout << newList[i] << " ";
    }
    cout << endl;
}