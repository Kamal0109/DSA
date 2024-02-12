#include <iostream>
using namespace std;


void merge(int * arr,int s,int e){
    int mid = s + (e - s) / 2;
    int len1=mid-s+1;
    int len2=e-mid;

    // Making two new array
    int *first = new int[len1];
    int *second = new int[len2];

    // copying elements
    int mainIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIndex++];
    }
    mainIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIndex++];
    }

    // Combining sorted list
    int index1=0;
    int index2=0;
    mainIndex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++]=first[index1++];
        }
        else{
            arr[mainIndex++]=second[index2++];
        }
    }
    while (index1 < len1) {
        arr[mainIndex++] = first[index1++];
    }

    // Copy the remaining elements of second array
    while (index2 < len2) {
        arr[mainIndex++] = second[index2++];
    }


    delete []first;
    delete []second;
  
    
 
}



void mergeSort(int * arr,int s,int e){
    // Base case
    if(s>=e){
        return;
    }
    int mid = s + (e - s) / 2;
    // Left Side
    mergeSort(arr,s,mid);
    //Right Side
    mergeSort(arr,mid+1,e);

    // merge
    merge(arr,s,e);

}


int main(){

    int arr[5]={1,8,4,2,1};
    int s=0;
    int e=4;
    mergeSort(arr,s,e);


    for(int i=0;i<5;i++){
        cout<<arr[i];
    }


    return 0;
}