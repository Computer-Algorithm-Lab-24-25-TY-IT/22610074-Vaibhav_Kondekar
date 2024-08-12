#include <iostream>
using namespace std;

const int MAX = 100;

void matrixMultiply(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = 0; 
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    cout << "Enter the number of rows for matrix A: ";
    cin >> rowsA;
    cout << "Enter the number of columns for matrix A: ";
    cin >> colsA;

    cout << "Enter the number of rows for matrix B: ";
    cin >> rowsB;
    cout << "Enter the number of columns for matrix B: ";
    cin >> colsB;

    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible with the given dimensions." << endl;
        return -1;
    }

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cin >> B[i][j];
        }
    }

    matrixMultiply(A, B, C, rowsA, colsA, colsB);

    cout << "Matrix A:" << endl;
    displayMatrix(A, rowsA, colsA);

    cout << "Matrix B:" << endl;
    displayMatrix(B, rowsB, colsB);

    cout << "Resultant Matrix C (A * B):" << endl;
    displayMatrix(C, rowsA, colsB);

    return 0;
}