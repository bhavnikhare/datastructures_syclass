//wap to print a (3x2) matrix where the elements of second row are double of first

#include <iostream>
using namespace std;

int main(){
    int arr[2][3];
    cout<<"Enter elements"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if (i==1){
                arr[i][j]=arr[i-1][j]*2;
            }
            else{
                cin>>arr[i][j];
            }
        } 
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0; 
}
