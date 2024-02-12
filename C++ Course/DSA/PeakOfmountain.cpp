#include <iostream>
using namespace std;
 

int firstOccurrence(int array[],int n){
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<e){
        int mid=(s+e)/2;
        if(array[mid]>array[mid+1] && array[mid]>array[mid-1]){
            ans=mid;
            return mid;
        }
        if(array[mid]>array[mid-1]){
            e=mid-1;
        }
        if(array[mid]<array[mid+1]){
            s=mid+1;
        }
    }
    return ans;
}


int main(){

    int array[10]={1,2,3,4,5,6,7,1,2};
    cout<<firstOccurrence(array,10)<<endl;
    
    
 
    return 0;
}