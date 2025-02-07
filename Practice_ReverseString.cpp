#include <iostream>
#include <string>
using namespace std;

void reverseString(string &userInput);

int main()
{
    string userInput;
    cout << "Enter a string: ";
    cin >> userInput;

    reverseString(userInput);

    cout << "The reversed string is: " << userInput << endl;

    return 0;
}

// Function to reverse the string in place
void reverseString(string &userInput)
{
    int start = 0;                    // Pointer to the start of the string
    int end = userInput.length() - 1; // Pointer to the end of the string

    // Loop to swap characters from both ends towards the center
    while (start < end)
    {
        // Swap characters using a temporary variable
        char temp = userInput[start];
        userInput[start] = userInput[end];
        userInput[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }
}