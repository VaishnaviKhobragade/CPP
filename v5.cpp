#include <iostream>
using namespace std;

int main() {
    int arr1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int rows = 3, cols = 3;

    // Reversing the first row of arr1 and storing it in arr2
    int j = 0;
    for (int i = cols-1; i >= 0; i--) {
        arr2[0][j] = arr1[0][i];
        j++;
    }
    
	for (int i = 1; i < 3; i++) {
        for (int j = 0; j < cols; j++) {
            arr2[i][j] = arr1[i][j];
       }
   }
	int l=0;
     for (int i = cols-1; i >= 0; i--) {
        arr2[2][l] = arr1[2][i];
        l++;
    }

    // Printing arr2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;--
    }

    return 0;
}
