#include <iostream> 
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverseString(char input[]){
    int len = length(input);
    int temp;
    int i = 0 , j = len - 1;
    while(i < j){
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main(){
    char input[20];
    cin.getline(input , 20 );
    reverseString(input);
    cout<<input<<endl;
}
