#include <iostream>
using namespace std;
 

// SEarching Element in 2D array
void search(int array[][4],int row,int col,int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(array[i][j]==target){
                cout<<i<<"  "<<j<<endl;;
            }
            
        }
    }
}


// Calculating sum of 2D array
void rowSum(int array[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=array[i][j]+sum;
        }
        cout<<"Sum of "<<i+1<<"row is "<<sum<<endl;
    }
}



int main(){

    int array[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>array[i][j];
        }
    }
    search(array,3,4,5);
    rowSum(array,3,4);

    return 0;
}