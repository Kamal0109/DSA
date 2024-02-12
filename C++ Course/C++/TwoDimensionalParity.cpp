#include <iostream>
using namespace std;

int main(){
   
   int r,c;
   cout<<"Enter the no of rows "<<endl;
   cin>>r;
   cout<<"Enter the no of columns "<<endl;
   cin>>c;
   int k[r+1][c+1] = {0};
   for(int i =0;  i<n; i++){
    int count = 0;
    for(int j=0; j<n;j++){
        if(a[i][j] == '1'){
            count++;
        }
    }
    if(count%2 == 0){
        a[i][j] = 0
    }
    else{
        a[i][j] = 1
    }
   }
   
   
   
    return 0;
}