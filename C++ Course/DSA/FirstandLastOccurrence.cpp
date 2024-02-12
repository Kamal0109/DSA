#include <iostream>
using namespace std;
 

int firstOccurrence(int array[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            ans=mid;
            e=mid-1;
        }
        if(array[mid]>key){
            e=mid-1;
        }
        if(array[mid]<key){
            s=mid+1;
        }
    }
    return ans;
}


int lastOccurrence(int array[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=0;
    while(s<e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            ans=mid;
            s=mid+1;
        }
        if(array[mid]>key){
            e=mid-1;
        }
        if(array[mid]<key){
            s=mid+1;
        }
    }
    return ans;
}


int main(){

    int array[10]={1,5,5,5,5,6,6,7,9,9};
    cout<<firstOccurrence(array,10,5)<<endl;
    cout<<lastOccurrence(array,10,5);
    
 
    return 0;
}