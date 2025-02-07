#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void freq(int data[], int size, int count[]);

int main()
{
    int seed;
    cin >> seed; // Input seed for random number generation
    srand(seed); // Set the seed for the random number generator

    const int MAX_SIZE = 100; // Size of the array
    const int MAX_NUM = 30;   // Range of numbers (0 to 29)

    int data[MAX_SIZE];       // Array to hold random numbers
    int count[MAX_NUM] = {0}; // Array to count occurrences of numbers from 0 to 29

    // Generate random numbers and fill the data array
    for (int i = 0; i < MAX_SIZE; i++)
    {
        data[i] = rand() % 30; // Generate a random number between 0 and 29
    }

    // Call the function to count the frequency of each number
    freq(data, MAX_SIZE, count);

    // Output the frequency of each number
    for (int i = 0; i < MAX_NUM; i++)
    {
        if (count[i] > 0)
        { // Only display numbers that occur at least once
            cout << i << " occurs " << count[i] << " times" << endl;
        }
    }

    return 0;
}
// Function to calculate the frequency of each element in the array
void freq(int data[], int size, int count[])
{
    // search the data array and count occurrences
    for (int i = 0; i < size; i++)
    {
        if (data[i] >= 0 && data[i] < 30)
        {
            count[data[i]]++; // Increment the count for the corresponding element
        }
    }
}