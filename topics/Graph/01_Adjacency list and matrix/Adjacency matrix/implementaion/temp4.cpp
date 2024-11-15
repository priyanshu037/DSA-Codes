// Adjacency matrix
// directed weighted graph

#include <iostream>
#include <vector>
using namespace std;


int main(){
    int vertex, edge;
    cin>>vertex>>edge;

    vector<vector<int> >AdjMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;
    for(int i=0; i<edge; i++){
        cin>>u>>v>>weight;
        AdjMat[u][v] = weight;
    }

    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}