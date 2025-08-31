//wap to find the determinant of the matrix 

#include <iostream>
using namespace std;

int determinant(int mat[10][10], int n) {
    if (n == 1) 
        return mat[0][0];

    if (n == 2)
        return (mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0]);

    int det = 0;
    int subMat[10][10];

    for (int x = 0; x < n; x++) {
        // Creating sub-matrix
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) continue;
                subMat[subi][subj] = mat[i][j];
                subj++;
            }
            subi++;
        }
        // Recursive call with sign change
        det += ( (x % 2 == 0 ? 1 : -1) * mat[0][x] * determinant(subMat, n-1) );
    }
    return det;
}

int main() {
    int n;
    int arr[10][10]; // supports up to 10x10 for simplicity

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter elements of " << n << "x" << n << " matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Determinant = " << determinant(arr, n) << endl;
    return 0;
}
