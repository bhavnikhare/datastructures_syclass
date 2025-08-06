//wap to make an array having even numbers between 0 to 20 

#include <iostream>
using namespace std;

int main(){
    int arr[11];
    int index=0;
    for (int i=0; i<21; i++){
        if(index<11){
            if(i%2==0){
                arr[index]=i;
                index++;
            }
        }
        else{
            break;
        }
    }

    for (int i=0; i<11; i++){
        cout<<arr[i]<<" ";

    }

    return 0; 
}