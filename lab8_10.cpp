// A C++ program to find the sum of the upper triangular matrix.
#include <iostream>
using namespace std;

int main()
{
    int rows, cols, sum = 0;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;
    int matrix[rows][cols];
    cout << "Enter elements in the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i <= j)
            {
                sum += matrix[i][j];
            }
        }
    }
    cout << "The sum of the upper triangular matrix is: " << sum << endl;
    return 0;
}
