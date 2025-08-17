// linear searching 

#include <iostream>
using namespace std;

int main(){
    int arr[15], user;
    cout<<"Enter elements of array:"<<endl;
    for (int i=0; i<15; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to find:"<<endl;
    cin>>user;
    for (int i = 0; i < 15; i++)
    {
        if(user==arr[i]){
            cout<<"Element found at index: "<<i<<endl;
        }
        else{
            continue;
        }
    }
    return 0;
}
