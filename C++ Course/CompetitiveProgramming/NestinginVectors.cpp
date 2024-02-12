#include <bits/stdc++.h>
using namespace std;


void printVec(vector<pair<int,int>> &v){
    cout<<"Size is "<<v.size()<<endl;
    int n = v.size();
    for(int i=0;i<n;i++){
       cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

 
int main(){
    vector<pair<int,int>> v = {{0,1},{1,2},{2,3}};    
    printVec(v);

    // Another way
    vector<pair<int,int>> v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});   // other method v1.push_back(make_pair(2,3));
    }
    printVec(v1);
    
 
    return 0;
}