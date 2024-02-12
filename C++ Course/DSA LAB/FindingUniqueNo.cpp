#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[10];

    for(int i=0; i <n ; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i < n; i++){
        

        for(int j = 0; j<n; j++){
            if (arr[j] != arr[i]){
                cout<<arr[i];
            }
        }
    }
    
    return 0;
}
