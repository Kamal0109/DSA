#include <iostream>
using namespace std;

int main(){
    int arr[] = { 5, 4, 6, 9, 10 };
    int a;
    for(int i=0; i<5; i++){
         a = sizeof(arr[i]);
    }
    cout<<a<<endl;
    return 0;
}
    
