// 3D array using pointer

#include <iostream>
using namespace std;

int main(){

    int l;
    cout<<"enter the length of the 3d array: "<<endl;
    cin>>l;

    int b;
    cout<<"enter the breadth of the 3d array: "<<endl;
    cin>>b;

    int h;
    cout<<"enter the height of the 3d array: "<<endl;
    cin>>h;
    
    // creation

    int ***ptr = new int**[l];

    for(int i=0; i<l; i++){
        ptr[i] = new int*[b];
        for(int j=0; j<b; j++){
            ptr[i][j] = new int [h];
        }
    }

    // insert values

    for(int i=0; i<l; i++){
        for(int j=0; j<b; j++){
            for(int k=0; k<h; k++){
                ptr[i][j][k] = i+j+k;
            }
        }
    }

    for(int i=0; i<l; i++){
        for(int j=0; j<b; j++){
            for(int k=0; k<h; k++){
                cout<<ptr[i][j][k]<<" ";
            }
        }
    }



}