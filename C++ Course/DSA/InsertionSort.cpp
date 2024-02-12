#include <iostream>
using namespace std;
 

void insertionSort(int array[],int n){
    for(int i=1;i<n;i++){
        int key=array[i];
        int j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
}


int main(){

    int array[5]={1,4,3,2,6};
    selectionSort(array,5); 
   
 
    return 0;
}