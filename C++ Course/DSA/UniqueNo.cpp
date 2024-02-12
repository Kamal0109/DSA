#include <iostream>
using namespace std;
 
void uniqueNo(int array[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^array[i];
    }
    cout<<ans;
} 


int main(){

    int array[6]={1,2,3,2,1};
    uniqueNo(array,6);
 
    return 0;
}