//wap to calculate sum of elements in an array

#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=arr[i];
    }
    cout<<"sum of elements are:"<<sum;
    return 0; 
}