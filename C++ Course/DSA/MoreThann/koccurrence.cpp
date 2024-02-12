#include <iostream>
using namespace std;
 

void occurrence(int array[],int n,int k){
    int ans=n/k;
    int count=0;
    sort(array,array+n);
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            if(array[i]==array[i+1]){
                count++;
            }
        }
        if(count>n/k){
            
        }
    }
}


int main(){

    int array[8]= {3,1,2,2,1,2,3,3};
    occurrence(arr,8,4);
    

    return 0;
}