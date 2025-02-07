#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int size = 4; // Size of the matrix (4x4 matrix as an example)
    int matrix[size][size];

    // Input the matrix elements
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << endl; // spacing

    // Display the original matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << right << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl; // spacing

    // Transpose the matrix and display it
    cout << "The transpose of the matrix traversing uppertriangle by rows: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[j][i] << " "; // Swapping rows and columns
        }
        cout << endl;
    }

    return 0;
}