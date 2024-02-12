#include <iostream>
using namespace std;
 

void selectionSort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(array[minIndex]>array[j]){
                minIndex=j;
            }
        }
        swap(array[i],array[minIndex]);
    }
}


int main(){

    int array[5]={5,4,1,3,4};
    selectionSort(array,5);    
    //Printing Array
    for(int i=0;i<5;i++){
        cout<<array[i];
    }

    return 0;
}