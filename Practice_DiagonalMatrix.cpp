#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4];
    int majorDiagonalSum = 0, minorDiagonalSum = 0;

    // Input elements of the matrix
    cout << "Enter elements for a 4x4 matrix:" << endl;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "Matrix is:" << endl;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate the sum of the diagonals
    for (int i = 0; i < 4; ++i)
    {
        majorDiagonalSum += matrix[i][i];     // Major diagonal
        minorDiagonalSum += matrix[i][3 - i]; // Minor diagonal
    }

    // Display the sum of diagonals
    cout << "Sum of the elements in the major diagonal is " << majorDiagonalSum << endl;
    cout << "Sum of the elements in the other diagonal is " << minorDiagonalSum << endl;

    return 0;
}