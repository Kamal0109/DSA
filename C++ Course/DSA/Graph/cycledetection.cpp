#include <bits/stdc++.h>
using namespace std;


// cycle detection
bool detect(int src,vector<int> adj[],int vis[]){
    
    vis[src]=1;
    queue<pair<int,int>> q;
    q.push({src,-1});
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();

        for(auto adjacentNode: adj[node]){
            if(vis[!adjacentNode]){
                vis[adjacentNode]=1;
                q.push({adjacentNode,node});
            }
            else if(parent!=adjacentNode){
                return true;
            }
        }
 
    }  

    return false;  
}


bool isCycle(int V,vector<int> adj[]){

    int vis[V]={0};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(detect(i,adj,vis)) return true;
        }
    }

    return false;

}


void dfs(int node,vector<int>adj[] ,int vis[],vector<int> &ls){

    vis[node]=1;
    ls.push_back(node);

    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }

}


vector<int> dfsOfGraph(int V,vector<int> adj[]){

    int vis[V]={0};
    int start=0;
    vector<int> ls;
    dfs(start,adj,vis,ls);

    return ls;

}
 
 
int main(){

    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);


    }
  
    return 0;
}