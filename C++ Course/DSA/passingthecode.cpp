#include <iostream>
using namespace std;
 
 
int main(){
    int n=6;
    int i ,j;
    for(i=1;i<5;j++){
        for(j=1;j<11;j++){
            if( j>= (i-1) && j<= (2i+1)){
                cout<<"";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}