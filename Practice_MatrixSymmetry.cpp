#include <iostream>
using namespace std;

const int SIZE = 5; // Define the size of the matrix as a constant

bool isSymmetric(int matrix[SIZE][SIZE], int size);

int main()
{
    int matrix[SIZE][SIZE];

    // Getting matrix input from the user
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Check if the matrix is symmetric
    if (isSymmetric(matrix, SIZE))
    {
        cout << "The matrix is symmetrical." << endl;
    }
    else
    {
        cout << "The matrix is not symmetrical." << endl;
    }

    return 0;
}
// function determines if the matrix is summetric or not based on the other diagonal (top right to bottom left)
bool isSymmetric(int matrix[SIZE][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] != matrix[size - 1 - j][size - 1 - i])
            {
                return false;
            }
        }
    }
    return true;
}