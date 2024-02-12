#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the Row :";
    cin>>row;
    cout<<"Enter the column :";
    cin>>column;
    int matrix [row][column];
    for(int i = 0 ; i < row; i++){
        for(int j = 0; j < column ; j ++){
                cin>>matrix[i][j];

        }
    }
    
    for(int i = 0 ; i < row; i++){
        int sum = 0;
        for(int j = 0; j < column ; j ++){
            sum = sum + matrix[i][j];}
            cout<<"Sum of row "<<i<<" : "<<sum<<endl;
            cout<<endl;
        }
        
    return 0;
}


