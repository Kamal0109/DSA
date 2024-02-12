#include <iostream>
using namespace std;


void bubbleSort(int array[] , int n){
    int temp = 0;
    for(int i = 1; i < n; i++){
        for(int j = 0; j< n-1; j++){
            if(array[j] < array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int array[5] = {5,4,3,2,1};
    bubbleSort(array, 5);
    for(int i = 0; i < 5; i++){
        cout<<array[i]<<"  ";
    }    
    return 0;
}