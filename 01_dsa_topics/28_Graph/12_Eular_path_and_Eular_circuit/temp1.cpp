// Eular path 
// link: https://www.geeksforgeeks.org/problems/euler-circuit-and-path/1?page=3&difficulty%5B%5D=1&category%5B%5D=Graph&sortBy=submissions


#include <iostream>
#include <vector>

using namespace std;

void DFS(int node,vector<int>adj[], vector<bool>&visited){
    visited[node] = 1;

    for(int j=0; j<adj[node].size(); j++){
        if(!visited[adj[node][j]]){
            DFS(adj[node][j], adj, visited);
        }
    }
}

int isEulerCircuit(int V, vector<int>adj[]){
	
    // Euler Circuit:
    // Calculate the degree of each node
    // All node should have even degree
    // All non zero degree node should be connected

    // Euler Path:
    // Calculate the degree of each node
    // zero or two node can have odd degree and remaining can have even degree
    // all non-zero degree node should be connected

    vector<int>Deg(V,0);
    int odd_Deg = 0; // number of nodes having odd degree
    for(int i=0; i<V; i++){
        Deg[i] = adj[i].size();
        if(Deg[i]%2){
            odd_Deg++;
        }
    }   

    if(odd_Deg!=2 && odd_Deg!=0){
        return 0;
    }

    vector<bool>visited(V,0);

    for(int i=0; i<V; i++){
        if(Deg[i]){
            DFS(i, adj, visited);
            break;
        }
    }

    // if non zero degree node is still not visited, return 0 not a euler path or circuit

    // if degree = 0, ignore -> no edge

    for(int i=0; i<V; i++){
        if(Deg[i]&&!visited[i]){
            return 0;
        }
    }

    // Euler circuit -> return 2
    if(odd_Deg==0){
        return 2;
    }else{
    // Euler path -> return 1
        return 1;
    }
}

int main(){

}

// S.C -> O(V)
// T.C -> O(V+E)