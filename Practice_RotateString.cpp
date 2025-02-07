#include <iostream>
using namespace std;

void rotateString(string &line, int character);

int main()
{
    string line;
    int character;

    // Input the string and the number of characters to rotate
    cin >> line;
    cin >> character;

    // Perform the rotation
    rotateString(line, character);

    // Output the rotated string
    cout << "Rotated string: " << line << endl;

    return 0;
}

void rotateString(string &line, int character)
{
    int n = line.length();

    // Handle case when k is greater than the string length
    character = character % n; // If k is larger than n, we rotate only k % n times

    // Perform rotation k times
    for (int i = 0; i < character; i++)
    {
        // Move the first character to the end
        char firstChar = line[0];

        // Shift all characters to the left by one position
        for (int j = 0; j < n - 1; j++)
        {
            line[j] = line[j + 1];
        }

        // Put the first character at the end of the string
        line[n - 1] = firstChar;
    }
}