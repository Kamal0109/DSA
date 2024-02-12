#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n>>i>>j;
    int array[10];
    for(int a = 0; a<n ; a++){
        cin>>array[a];
    }
    if( i>n || j>n ){
        cout<<"Not valid Index"<<endl;
    }
    else{
        int temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        }
        for(int b = 0 ; b <n ; b++){
            cout<<array[b];
        }
    return 0;
}