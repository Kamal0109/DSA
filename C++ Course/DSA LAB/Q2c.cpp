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
    int k;
    cout<<"enter the k index "<<endl;
    cin>>k;
    cout<<input[k];
}