#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){

    for(int i = 0; i <n ; i++){
        cout<<arr[i]<<endl;
    }

}


void bubbleSort(int array[] , int n){

   for(int i = 1; i < n ; i++){  
       for(int j = 0; j < n - i ; j++){
           if(array[j] > array[j+1]){
            swap(array[j] , array[j+1]);
           }
       }
   }

   printArray(array,5);

}


int main(){

    int array[5] = {5,4,3,2,1};

    bubbleSort(array,5);    
   
    return 0; 
}