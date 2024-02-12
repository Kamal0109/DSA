#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[5];
    for(int i = 0; i < n; i ++){
        cin>>array[i];
    }
    int max = array[0];
    for(int j = 0; j < n ; j ++){
        if(max < array[j]){
            max = array[j];
        }
    }
    cout<<max<<endl;
      
    return 0;
}
