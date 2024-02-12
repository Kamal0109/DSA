#include <iostream>
#include<vector>
using namespace std;
 

int spiralTraverse(int array[][4],int row,int col){
    vector<int>arr;    
    int startingRow=0;
    int endingRow=row-1;
    int startingCol=0;
    int endingCol=col-1;
    int count=0;
    int total=row*col;
    while(count<total){
        for(int i=startingCol;count<total && i<=endingCol;i++){
            arr.push_back(array[startingRow][i]);
            count++;
        }
        startingRow++;
        for(int i=startingRow;count<total && i<=endingRow;i++){
            arr.push_back(array[i][endingCol]);
            count++;
        }
        endingCol--;
        for(int i=endingCol;count<total && i>=startingCol;i--){
            arr.push_back(array[endingRow][i]);
            count++;
        }
        endingRow--;
        for(int i=startingCol;count<total && i>=endingCol;i++){
            arr.push_back(array[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return arr;
}


int main(){
    int row,col;
    cin>>row>>col;
    int array[row][4];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    int ans=spiralTraverse(array,row,col);
    cout<<ans;

    return 0;
}