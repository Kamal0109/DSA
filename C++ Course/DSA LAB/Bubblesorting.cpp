#include <iostream>
using namespace std;

void printArray(int input[] , int n){
    for (int i = 0; i<n ; i ++){
        cout<<input[i];
    }
    cout<<endl;
}

void BubbleSort(int arr[], int n){
    for(int j = 0; j < n- 1; j ++){
        for(int i = 0; i < n-1-j ; i ++){
            if(arr[i] > arr[i+1]){
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main (){
    int n;
    cin>>n;
    
    int input[100];
    for (int i = 0 ; i<n ; i++ ){
        cin>>input[i];

    }
    BubbleSort(input,n);

    }



