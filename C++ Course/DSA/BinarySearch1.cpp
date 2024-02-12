#include <iostream>
using namespace std;


int binarySearch(int array[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        if(array[mid]>key){
            e=mid-1;
        }
        if(array[mid]<key){
            s=mid+1;
        }
    }
    return -1;
}

 
int main(){
   
    int array[5]={1,2,3,4,5};
    int ans=binarySearch(array,5,3);
    cout<<ans<<endl;
    
  
    return 0;
}