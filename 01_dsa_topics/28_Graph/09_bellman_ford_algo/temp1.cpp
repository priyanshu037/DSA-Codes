// Bellman-ford algo

#include <iostream>
#include <vector>

using namespace std;

vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
    vector<int>dist(V, 1e8);
    // 1e8 = 100000000
    dist[S] = 0;
    int e = edges.size();

    for(int i=0; i<V-1; i++){

        // relax all the edges
        
        bool flag = 0;

        for(int j=0; j<e; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if(dist[u]==1e8){
                continue;
            }

            if(dist[u] + wt < dist[v]){
                flag = 1;
                dist[v] = dist[u] + wt;
            } 
        }

        if(!flag){
            return dist;
        }
    }

    // to detect the cycle
    for(int j=0; j<e; j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];

        if(dist[u]==1e8){
            continue;
        }

        if(dist[u] + wt < dist[v]){
            vector<int>ans;
            ans.push_back(-1);
            return ans;
        } 
    }

    return dist;

}

int main(){

}

// T.C -> O(V*e)
// S.C -> O(V)