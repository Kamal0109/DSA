#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
   
    string str="KAMAl";

    stack<char> s;   
    
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans= "";

    while(!s.empty()){
        char pr=s.top();
        ans.push_back(pr);

        s.pop();
    }

    cout<<ans;

    return 0;
}