#include <iostream>
using namespace std;
 
 
int main(){
 
    int num;
    cin>>num;
    int digit=0;
    int ans=0;
    int count=0;
    while(num!=0){
        digit=num%2;
        if(digit==1){
            count++;
        }
        num=num/2;
        
    }

    cout<<count<<endl;

    return 0;
}