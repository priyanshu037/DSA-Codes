// Floyd warshell algo
// link: 

#include <iostream>
#include <vector>>

using namespace std;

void shortest_dist(vector<vector<int>>&matrix){
    int n = matrix.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==-1){
                matrix[i][j] = __INT64_MAX__;
            }
        }
    }

    // Floyd warshell algo

    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                if(matrix[i][k]==__INT64_MAX__ || matrix[k][j]==__INT64_MAX__){
                    continue;
                }

                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==__INT64_MAX__){
                matrix[i][j] = -1;
            }
        }
    }
}

int main(){

}

// T.C -> O(V^3)
// S.C -> O(1)