//wap to print diagonal of a matrix (4x4)
#include <iostream>
using namespace std;

int main(){
    int arr1[4][4];
    cout<<"enter values for matrix 1"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr1[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==j){
                cout<<arr1[i][j]<<" ";
            }
        }
    }

    return 0; 
}