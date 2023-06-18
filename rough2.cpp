#include <iostream>
#include <vector>
using namespace std;


int main() {
    int rows = 3;
    int columns = 3;

    // Create a matrix using a vector of vectors
    vector<vector<int>> matrix(rows, vector<int>(columns));

    // Assign values to the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin>>matrix[i][j];
        }
    }

    // Print the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
