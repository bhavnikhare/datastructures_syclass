//write a program to represent 3*3 matrix in the form of 2d array

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter elements of 3x3 matrix:"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Display"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
