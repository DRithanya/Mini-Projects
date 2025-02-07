#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char generateRandomLetter();
char generateRandomDigit();
void generatePlateNumber(int plateNumber);

int main()
{
    // Seed the random number generator
    // srand(time(0));
    int seed;

    // Ask the user for a seed value
    cin >> seed;
    // Use the provided seed to initialize the random number generator
    srand(seed);

    // Generate and print 10 plate numbers
    for (int i = 1; i <= 10; i++)
    {
        generatePlateNumber(i);
    }

    return 0;
}
// Function to generate a random uppercase letter
char generateRandomLetter()
{
    return 'A' + rand() % 26; // 'A' is 65, 'Z' is 90
}

// Function to generate a random digit
char generateRandomDigit()
{
    return '0' + rand() % 10; // Generates digits from '0' to '9'
}

// Function to generate and print a plate number
void generatePlateNumber(int plateNumber)
{
    char plate[7]; // Array to hold 3 letters and 4 digits (Total 7 characters)

    // Generate the 3 uppercase letters
    for (int i = 0; i < 3; i++)
    {
        plate[i] = generateRandomLetter();
    }

    // Generate the 4 digits
    for (int i = 3; i < 7; i++)
    {
        plate[i] = generateRandomDigit();
    }

    // Print the generated plate number in the required format
    cout << "Vehicle plate number " << plateNumber << ": ";
    for (int i = 0; i < 7; i++)
    {
        cout << plate[i];
    }
    cout << endl;
}