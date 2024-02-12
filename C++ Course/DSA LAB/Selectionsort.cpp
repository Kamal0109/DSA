#include <iostream>
using namespace std;

void selectionsort(int input[], int n){
    //Finding the smallest element of the array
    for(int i = 0; i < n; i ++){
    int min = input[i];
    int minIndex = i;
    for(int j = 1; j < n ; j ++){
        if(min < input[j]){
            min = input[j];
            minIndex = j;
        }
    }
    //Swapping
    int temp;
    temp = input[i];
    input[i] = 
    }
}

int main({

})