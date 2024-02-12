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
    int max = input[0];
    for(int j = 0; j < n ; j++ ){
        if(input[j] > max){
            max = input[j];
        }
    }
    cout<<"our maximum element is "<<max<<endl;
    return 0;
}