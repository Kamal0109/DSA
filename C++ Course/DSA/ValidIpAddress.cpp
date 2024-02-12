#include <bits/stdc++.h>
using namespace std;
 

int isValid(string s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            count++;
        }
        if(s[i]=='.' && s[i+1]=='.'){
            return 0;
        }
    }
    if(count>3){
        return 0;
    }
    return 1;            
}


int main(){

    string s="222.111.111.111";
    string r="5555..555";
    cout<<isValid(r);
  
 
    return 0;
}