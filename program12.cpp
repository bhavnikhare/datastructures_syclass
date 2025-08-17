//wap to increase the size of an array by 1 element

#include <iostream>
using namespace std;

int main(){
    int arr1[5], arr2[6];
    cout<<"Enter the elements for array ";
    for(int i=0; i<5; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<6; i++){
        arr2[i]=arr1[i];
    }
    cout<<"Enter extra element:"<<endl;
    cin>>arr2[5];

    for(int i=0; i<6; i++){
        cout<<arr2[i]<<" ";}

    return 0; 
}