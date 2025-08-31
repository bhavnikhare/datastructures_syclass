//wap to delete an element from array 

#include <iostream>
using namespace std;

int main() {
    int arr[5], user, ind = 0;
    int n = 5;

    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to delete:" << endl;
    cin >> user;

    
    for (int i = 0; i < n; i++) {
        if (user == arr[i]) {
            ind = i;
            break;
        }
    }

    if (ind == 0) {
        cout << "Element not found!" << endl;
    } 
    else {
        
        for (int i = ind; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        arr[n]=0;

        cout << "Array after deletion: ";
        for (int i = 0; i <= n; i++) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
