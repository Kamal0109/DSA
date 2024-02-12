#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
   
   for(int i =0; i<n; i++){

         cout<<arr[i]<<endl;
   }
}


void SelectionSort(int array[] , int n){

   for(int i = 0; i < n-1; i++){

      int minIndex = i;

      for(int j = i+1; j < n; j++){
         
         if(array[minIndex] > array[j]){
            minIndex = j;
         }

      }

      swap(array[minIndex],array[i]);

   }

   printArray(array,5);   

}


int main(){
   
   int array[5] = {6,4,2,1,3};

   SelectionSort(array,5);

   return 0;

}