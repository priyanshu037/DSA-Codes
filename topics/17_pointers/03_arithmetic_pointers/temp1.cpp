// pointer can perform arithmetic operations like ++, --

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;

    for(int i=0; i<5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;

    int *ptr2 = &arr[4];
    
    for(int i=0; i<5; i++){
        cout<<*ptr2<<" ";
        ptr2--;
    }
    cout<<endl;
}