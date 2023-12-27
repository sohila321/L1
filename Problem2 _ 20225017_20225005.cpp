#include <iostream>
using namespace std;
bool isValidMatrix(int** matrix, int n) {
    bool* rowValues = new bool[n]();  //intializatio arrar all of his elements is false  
    bool* colValues = new bool[n]();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = matrix[i][j];
            if (num < 1 || num > n)
                return false;
            if (colValues[num - 1])
                return false;
            colValues[num - 1] = true;
        }
        for (int j = 0; j < n; j++) {
            if (!colValues[j])
                return false;
            colValues[j] = false;
        }
        rowValues[i] = true;
    }
    delete[] rowValues;
    delete[] colValues;
    return true;
}
int main()
 {
    int row, col;
    bool validChoice = false;
    while (!validChoice) {
        cout << "Enter the number of rows: ";
        cin >> row;
        cout << "Enter the number of columns: ";
        cin >> col;
        if (row != col)
            cout << "Invalid choice. The matrix has a size of nxn. Please try again.\n";
        else
            validChoice = true;
     }
    int** matrix = new int*[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
        for (int j = 0; j < col; j++) {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
    bool isValid = isValidMatrix(matrix, row);
    if (isValid)
        cout << "The matrix is valid." << endl;
    else
        cout << "The matrix is not valid." << endl;
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}