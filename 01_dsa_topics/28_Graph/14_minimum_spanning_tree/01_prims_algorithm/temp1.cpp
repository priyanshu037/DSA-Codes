// prims algorithm
// link: https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
{
    // code here
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> ,greater< pair<int, pair<int,int>>>>pq;

    vector<bool>IsMST(V,0);
    vector<int>parent(V);

    int cost = 0;
    pq.push({0,{0, -1}});

    while(!pq.empty()){
        int wt = pq.top().first;
        int node = pq.top().second.first;
        int par = pq.top().second.second;
        pq.pop();

        if(!IsMST[node]){
            IsMST[node] = 1;
            cost += wt;
            parent[node] = par;

            for(int j=0; j<adj[node].size(); j++){
                if(!IsMST[adj[node][j][0]]){
                    pq.push({adj[node][j][1], {adj[node][j][0], node}});
                }
            }
        }
    }

    return cost;

}

int main(){

}


// T.C -> O()
// S.C -> O()