#include <iostream>
using namespace std;

int main(){
    int input[10];
    int n;
    cout<<"Enter the size of the element"<<endl;
    cin>>n;
    cout<<"Enter the input for array"<<endl;
    for(int i = 0; i < n ; i ++){
        cin>>input[i];
    }
    int a,b;
    cout<<"Enter the index of  element which we want to swap"<<endl;
    cin>>a>>b;
    int temp;
    
        temp = input[a];
        input[a] = input[b];
        input[b] = temp;
     for(int i = 0; i < n ; i ++){
        cout<<input[i];
    }    
    
    return 0;
}