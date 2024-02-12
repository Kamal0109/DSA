#include <iostream>
using namespace std;

int binarySearch(int array[] , int size , int key){
        int start = 0;
        int end = size - 1;
        int mid = (start + end)/2;
        while(start <= end){
            if(array[mid] == key){
                return mid;
            }
            if(array[mid] < key){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = (start + end)/2;
        }
        return -1;
}


int main(){
    int array[5] = {5,9,6,2,8};
    int index = binarySearch(array,5,8);
    cout<<"Index of the key is "<<index;
    return 0;
}