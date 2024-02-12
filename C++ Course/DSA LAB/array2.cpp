// taking input in array
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[10];

    for(int i = 0; i < n ; i ++){
        cin>>arr[i];
    }


    for(int i = 0; i < n ; i ++){
        cout<<arr[i]<<endl;
    }

    return 0;
}