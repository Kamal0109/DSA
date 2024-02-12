#include <bits/stdc++.h>
using namespace std;


void printVec(vector<int>v){
    cout<<"Size of vector"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}


// This is the print func which is taking pointer as a input
void printVec1(vector<int>&v){
    cout<<"Size of vector"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}


// This is for string
void printVecString(vector<string>&v){
    cout<<"Size of vector"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}


 
int main(){

    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v); 


    //vector size can be declared at time 
    vector<int>v1(3);
    v1.push_back(4);
    printVec(v1);

    // If we want to fill vector during its time of declaration
    vector<int>v2(3,2);
    printVec(v2);

    // pop_back
    v2.pop_back();

    // If we want to copy vector then it will take O(n)
    vector<int>v3 = v;
    printVec1(v3);

    // if we want to point to same vector
    vector<int>&v4 = v1;
    v4.push_back(8);
    printVec1(v4);
    printVec1(v1);

    // Now dealing with string
    vector<string>s;
    int l;
    cin>>l;
    for(int i=0; i<l; i++){
        string y;
        cin>>y;
        s.push_back(y);
    }
    printVecString(s);


    return 0;
}