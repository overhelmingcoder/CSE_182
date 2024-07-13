// a C++ program to count the frequency of each element in an array
#include <iostream>
using namespace std;

int main() {
    int n, count;


    cout << "Enter the size of the array: ";
    cin >> n;


    int array[n], visited[n];


    cout << "Enter " << n << " numbers in the array: ";
    for(int i=0; i<n; i++){
        cin >> array[i];
    }


    for(int i=0; i<n; i++){

        if(visited[i] == 1)
            continue;


        count = 0;
        for(int j=0; j<n; j++){
            if(array[i] == array[j]){

                visited[j] = 1;
                count++;
            }
        }
            cout << array[i] << ": " << count << endl;
    }

    return 0;
}
