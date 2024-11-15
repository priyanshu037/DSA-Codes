// 3: Find the index of a specific element in an array, if the element is not present, print -1. Ask the size of the array from the user and then implement it.

#include <iostream>
using namespace std;

int main(){

    int arr[6] = {1,6,2,7,8,9};

    int elem;
    cout<<"Enter the element whose index you want to find: "<<endl;
    cin>>elem;

    int index;
    for(int i=0; i<6; i++){
        if(arr[i]==elem){
            index = i;
        }
    }

    cout<<"Index of "<<elem<<" is: "<<index<<endl;

}