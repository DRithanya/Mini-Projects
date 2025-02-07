#include <iostream>
#include <string>
using namespace std;

int palindrome(const string &str);

int main()
{
    string userInput;
    cout << "Enter a string: ";
    cin >> userInput;

    if (palindrome(userInput) == 1)
    {
        cout << "The given string is a palindrome." << endl;
    }
    else
    {
        cout << "The given string is not a palindrome." << endl;
    }

    return 0;
}

int palindrome(const string &str)
{
    int start = 0;              // start pointer
    int end = str.length() - 1; // end point

    // Check characters from opposite ends
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0; // not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It is a palindrome
}