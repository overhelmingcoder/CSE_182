//a C++ program to find the sum of the main diagonal elements of a matrix.

#include <iostream>
#define SIZE 3
using namespace std;

int main()
{
  int matrix[SIZE][SIZE];
  int main_diagonal = 0;
  cout << "Enter elements into the matrix \n";


  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];
      if(i==j)
        main_diagonal += matrix[i][j];

    }
  }

  cout << "Sum of Main Diagonal: "<<main_diagonal  << endl;


  return 0;
}
