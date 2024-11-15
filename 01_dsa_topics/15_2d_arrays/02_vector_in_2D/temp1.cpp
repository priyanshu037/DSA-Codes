#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // create 2-D vector
    vector<vector<int> >matrix(3, vector<int>(4,1));

    // print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<matrix[i][j]<<" ";
        }
    }
    cout<<endl;

    // find rows
    cout<<"Rows: "<<matrix.size()<<endl;

    // find col
    cout<<"Cols: "<<matrix[0].size()<<endl;

    // user input
    int n, m;
    cout<<"Enter rows and cols: "<<endl;
    cin>>n>>m;
    vector<vector<int> >matrix2(n, vector<int>(m,1));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix2[i][j]<<" ";
        }
    }
}