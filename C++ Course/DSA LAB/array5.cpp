#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[10];
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }
    
    int num;
    cin>>num;
    for(int i = 0; i < n; i++){
        if(arr[i] = num){
            cout<<i<<endl;

        }
    }


}