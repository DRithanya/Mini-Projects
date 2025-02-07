#include <iostream>
#include <string>
using namespace std;

int isBalancedString(const string &str);

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Check if the string is balanced
    if (isBalancedString(input) == 1)
    {
        cout << "The given string is balanced." << endl;
    }
    else
    {
        cout << "The given string is not balanced." << endl;
    }

    return 0;
}
// Function to check if the string is balanced
int isBalancedString(const string &str)
{
    int balance = 0;

    // Traverse each character in the string
    for (char ch : str)
    {
        if (ch == '(')
        {
            balance++; // Increment balance for '('
        }
        else if (ch == ')')
        {
            balance--; // Decrement balance for ')'
        }

        // If balance goes negative, the string is unbalanced
        if (balance < 0)
        {
            return 0; // Not balanced
        }
    }

    // If balance is 0, the string is balanced, otherwise it's not
    return (balance == 0) ? 1 : 0;
}