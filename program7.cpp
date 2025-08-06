//wap to multiply two matrices
#include <iostream>
using namespace std;

int main(){
    int arr1[4][4], arr2[4][4], res[4][4];
    cout<<"enter values for matrix 1"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr1[i][j];
            
        }
    }

    cout<<"enter values for matrix 2"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr2[i][j];  
            res[i][j]=0;
        }
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            for (int k=0; k<4; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}