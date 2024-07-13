// A C++ program to check whether a matrix is sparse or not

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

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
      int counter = 0;
     for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    if (counter > ((rows *cols) / 2))
    {
        cout << "The given matrix is sparse." << endl;
    }
    else
    {
        cout << "The given matrix is not sparse." << endl;
    }
    return 0;
}

