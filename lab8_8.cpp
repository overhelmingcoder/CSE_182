// a C++ program to find the sum of the minor diagonal elements of a matrix.
#include <iostream>
#define SIZE 3
using namespace std;

int main()
{
  int matrix[SIZE][SIZE];
  int minor_diagonal=0;
  cout << "Enter elements into the matrix "<<endl;


  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];

      if((i+j) == SIZE-1)
         minor_diagonal += matrix[i][j];
    }
  }


  cout << "Sum of Minor Diagonal: "<<  minor_diagonal << endl;

  return 0;
}
