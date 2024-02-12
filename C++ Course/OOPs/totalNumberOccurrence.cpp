// Find the occurrence of 

#include <iostream>
using namespace std;


void findOccurence(int array[] , int n, int* number, int* times){
    
    for(int i = 0; i < n; i++){
         int count = 0;
        for(int j = i+1; j< n; j++){
            if(array[i] == array[j]){
                count ++;
            } 
        }
        *number = array[i];
        *times = count;       
    
    }

}


int main(){
    
    int array[10] = {1,1,2,2,2,3,5,6,7,8};
    int number , times;

    findOccurence(array, 10 ,&number, &times);

    cout<<number<<" "<<times;

    



    return 0;
}






#include <iostream>
using namespace std;

void calFreq(int arr[], int size, int freq[]){
    for(int i=0; i<size; i++){
        int num = arr[i];
        int cnt = 0;
        for(int j=i; j<size; j++){
            if(arr[j]==num && arr[j]!=-1){
                cnt++;
                arr[j]=-1;
            }
        }
        freq[i]=cnt;
    }
}

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size; 
    int arr[size];
    cout << "Enter array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int arr2[size];
    for(int i=0; i<size; i++){
        arr2[i] = arr[i];
    }
    int freq[size];
    calFreq(arr2,size,freq);
    cout << "Output" << endl;
    for(int i=0; i<size; i++){
        if(freq[i]!=0){
            cout << arr[i] << " " << freq[i] << endl;
        }
    }

}