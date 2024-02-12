#include <iostream>
using namespace std;

void insertionSort(int array[], int n){
    for(int i = 0; i<n ; i++){
        int current = array[i];
        int j;
        for(j = i-1;j >=0 ; j--){
            if(array[j] > current){
                array[j+1] = array[j];
            }
            else{
                break;
            }
        }
        array[j+1] = current;
    }
}

void printArray(int array[],int n){
    for(int i =0 ; i< n ;i ++){
        cout<<array[i]<<"  ";
    }
}

int main(){
    int n = 5;
    int array[5] = {10,99,35,9,67};
    insertionSort(array,5);
    printArray(array,5);
    return 0;

}