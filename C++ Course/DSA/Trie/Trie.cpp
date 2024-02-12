#include <iostream>
using namespace std;
 

class TrieNode{
    public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    // const
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};


class Trie{
    public:
    TrieNode* root;

    void insertUtil(TrieNode* root,string word){
        // base case
        if(word.length()==0){
            root->isTerminal=true;
        }        

        // word in capital
        int index = word[0] - 'A';

        TrieNode * child;

        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new Trie(word[0]);
            root->children[index] = child;
        }   

    }
    
    void insertWord(string word){
        insertUtil(root,word);
    }


    bool searchUtil(TrieNode* root, string word){

        if(word.length()==0){
            return root->isTerminal;
        }

        int index = word[0]-'A';
        TrieNode* child;
        
        // present
        if(root->children[index] != NULL){
            child = root->children[index];
        }

        // absent
        else{
            return false;
        }

        // recursion 
        return searchUtil(root,word(1));

    }


    bool search(string word){
        return searchUtil(root,word);
    }

};


int main(){
    
    
 
    return 0;
}