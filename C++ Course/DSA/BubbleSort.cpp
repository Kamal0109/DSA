// How to optimize bubble sort from O(n^2) to O(n) when array is already sorted we will use bool swap==false and if there 
// is just one swap then bool swapped will turn into true and after exiting from the loop if bool is false then break;


#include <iostream>
using namespace std;
 

void bubbleSort(int array[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}


int main(){

    int array[5]={5,4,1,3,4};
    bubbleSort(array,5);    
    //Printing Array
    for(int i=0;i<5;i++){
        cout<<array[i];
    }
 
   
 
    return 0;
}