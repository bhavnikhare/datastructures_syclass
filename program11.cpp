
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size:";
    cin>>size;

    int*  dynamicArray = new int[size];

    for(int i=0; i<size; i++){
        dynamicArray[i]= i*10;
        cout<<dynamicArray[i]<<" ";
    }
    cout<<endl;

    delete[]dynamicArray;
    dynamicArray= nullptr;
    return 0; 
}