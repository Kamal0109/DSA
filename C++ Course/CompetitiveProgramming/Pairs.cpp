#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    
    pair<int,string>p;
    //First Way to initialise 
    p=make_pair(2,"abc");
    //Printing the pair
    cout<<p.first<<" "<<p.second<<endl;
    //Second Way to initialise
    p = {1,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    //It can be also copied
    pair<int,string>p1=p;
    p1.first = 3;
    cout<<p1.first<<" "<<p1.second<<endl;
    //If we want to change p then we can pass its address to p1
    pair<int,string>&p2 = p;
    p2.first = 5;
    cout<<p.first<<" "<<p.second<<endl;

    // Now creating Array
    pair<int,int>p_arr[3];
    p_arr[0]={1,2};
    p_arr[1]={2,3};
    p_arr[2]={3,4};
    //if we want to swap p_arr[1] with p_arr[3] then
    swap(p_arr[0],p_arr[2]);    
    for(int i=0;i<3;i++){
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
    cin>>p.first;   

 
    return 0;
}