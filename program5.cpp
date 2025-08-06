//wap a program to add two matrices
#include <iostream>
using namespace std;

int main(){
    int arr1[3][3], arr2[3][3], arr3[3][3];
    cout<<"enter values for matrix 1"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"enter values for matrix 2"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"addition of two matrix"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}