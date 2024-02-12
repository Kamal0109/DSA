// Sum of the elements of the arrays 
#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int arr[10];
    for(int i = 0; i < n; i ++){
        cin>>arr[i];

    }
    int sum = 0;
    for(int i = 0; i <= n ; i ++){
        sum = sum + i ;

    }

    cout<<"Sum of the elements in array is :"<<sum<<endl;

    return 0;
}

