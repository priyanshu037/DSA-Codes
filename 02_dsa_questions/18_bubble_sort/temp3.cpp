// 3: Bubble Sort Algorithm to sort the array of char in ascending order.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    char ch[100];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>ch[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(ch[j]<ch[j+1]){
                swap(ch[j], ch[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
}
