// printing values of an array

#include <iostream>
using namespace std;

int main(){

    int arr[5] = {0,10,18,3,5};

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr2[6] = {1,2,34,65,7,9};
    cout<<arr2[0]<<endl;
    cout<<arr2[1]<<endl;
    cout<<arr2[2]<<endl;
    cout<<arr2[3]<<endl;
}