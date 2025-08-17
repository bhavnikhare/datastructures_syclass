//dynamic array using malloc 

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;

    int* arr= (int* ) malloc(size* sizeof(int));
    for(int i=0; i<size; i++){
        arr[i]=i*2;
    }
    for(int i=0; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    free(arr);
    return 0; 
}
