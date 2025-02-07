#include <iostream>
#include <iomanip>
using namespace std;

void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);

int main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Input values for matrix1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // Input values for matrix2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Add the matrices
    addMatrices(matrix1, matrix2, result);

    // Output the result of matrix addition in the required format
    cout << "The addition of the matrices is\n";

    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        // Print matrix1 row
        for (int j = 0; j < 3; j++)
        {
            cout << matrix1[i][j] << " ";
        }

        // Print the + sign only on the second row
        if (i == 1)
        {
            cout << " +    ";
        }
        else
        {
            cout << "      ";
        }

        // Print matrix2 row
        for (int j = 0; j < 3; j++)
        {
            cout << matrix2[i][j] << " ";
        }

        // Print the equals sign only on the second row
        if (i == 1)
        {
            cout << " =    "; // Centered equals sign
        }
        else
        {
            cout << "      ";
        }

        // Print result row
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

// Function to add two matrices
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}