#include <iostream>
using namespace std;

class stackClass{
    int * data;
    int nextIndex;
    int capacity;

    public:
    stackClass{int totalSize}{
        data =new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }
};

void push(int element){
    if(nextIndex == capacity){
        cout<<"Stack Full"<<endl;
    }
    data[nextIndex] = element;
    nextIndex ++;
}



int main(){
    return 0;
}