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

    
    for(int i = 0 ; i < n; i ++){
        int sumd1 = 0;
        int sumd2 = 1;
        for(int j = 0 ; j++ ; j++ ){
            sumd1 = matrix[i][i];
            sumd2 = matrix[n-i-1][i];
        }
        if(sumd1 ! = sumd2){
            return false;
        }
    }
    
    for(int i = 0; i < n; i ++){
        int rowsum = 0;
        int columnsum = 0;
        for( int j = 0; j <n ; j ++ ){
            rowsum = matrix[i][j];
            columnsum = matrix[j][i];
        }
    }    
    return 0;
}

