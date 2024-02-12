#include <iostream>
using namespace std;
 

void reverseArray(int array[],int n){
    int i=0;
    int j=n-1;
    int temp=0;
    while(i<j){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

}



int main(){
   
    int array[5]={1,2,3,4,5};
    reverseArray(array,5);

  
    return 0;
}