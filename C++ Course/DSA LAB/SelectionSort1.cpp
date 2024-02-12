#include <iostream>
using namespace std;


void selectionSort(int array[] , int n){
    for(int i=0; i < n - 1 ; i++){
        int minIndex = i;
        int temp = 0;
        for(int j = i+1; j < n; j++){ 
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
            }
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;       
        
    }

}


int main(){
    int array[5] = {2,3,1,5,4};
    int n;
    cin>>n;
    selectionSort(array , n);
    for(int i=0; i<n; i++){
        cout<<array[i]<<"   ";
    }
    
    
    return 0;
}
