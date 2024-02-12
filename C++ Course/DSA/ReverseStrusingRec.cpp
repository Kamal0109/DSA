#include <iostream>
using namespace std;


void reverse(string &s,int i,int j){
    //base case
    if(i>=j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    // Recursive call
    reverse(s,i,j);
}
 
int main(){
    
    string s="AMAN";
    cout<<reverse(s,0,3);
  
    return 0;
}