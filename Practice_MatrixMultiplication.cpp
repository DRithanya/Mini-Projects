#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;

    // Input the dimensions of the matrices
    cout << "Enter rows and column for first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter rows and column for second matrix: ";
    cin >> rows2 >> cols2;

    // Check if multiplication is possible
    while (cols1 != rows2)
    {
        cout << endl;
        cout << "Error! column of first matrix not equal to row of second." << endl;

        cout << endl;

        cout << "Enter rows and column for first matrix: ";
        cin >> rows1 >> cols1;

        cout << "Enter rows and column for second matrix: ";
        cin >> rows2 >> cols2;
    }

    int seed;
    cout << "Enter a seed value: ";
    cin >> seed;
    srand(seed);

    cout << endl;

    // Declare matrices
    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Input and display elements of first matrix
    cout << "The elements of matrix 1: " << endl;
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            matrix1[i][j] = rand() % 20;
            cout << setw(3) << right << matrix1[i][j];
        }
        cout << endl;
    }

    cout << endl;

    // Input and display elements of second matrix
    cout << "The elements of matrix 2: " << endl;
    for (int i = 0; i < rows2; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            matrix2[i][j] = rand() % 20;
            cout << setw(3) << right << matrix2[i][j];
        }
        cout << endl;
    }

    // Initialize result matrix to 0
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            for (int k = 0; k < cols1; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the result matrix in the expected format
    cout << endl; // spacing
    cout << "The output Matrix is: " << endl;
    for (int i = 0; i < rows1; ++i)
    {
        // cout << endl;
        for (int j = 0; j < cols2; ++j)
        {
            cout << setw(5) << left << result[i][j];
        }
        cout << endl;
    }

    return 0;
}