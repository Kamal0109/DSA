#include<iostream>
using namespace std;
#include <cstring>

int main(){
    // Using the inbuilt function cstrlen to find the length of the string
    /* char input[20];
    cin.getline(input, 20);
    int len = strlen(input);
     cout<<len<<endl;  */

    //Using strcmp to compare the string whether they are equal 
     /*char input1[20];  
     char input2[20];
     cin>>input1>>input2;
     
     int compare = strcmp(input1 , input2);
     cout<<compare<<endl;

     if(compare == 0){
        cout<<"They are equal"<<endl;
     }
     else{
        cout<<"Not equal"<<endl;
     }*/

     //Using the cpoy function to copy the string from source to destination
     char input1[20];
     char input2[20];
     cin>>input1>>input2;
     strcpy(input1 , input2);  // This will tranfer from input2 to input1
     cout<<input1<<endl;
     
    


    return 0;

}