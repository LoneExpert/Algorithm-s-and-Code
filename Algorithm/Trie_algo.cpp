#include<iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data = ch;
            for(int i=0;i<26;i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

    class Trie
{
    public:
        TrieNode* root;

    // constructor
    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        if(word.length()==0){   
            root->isTerminal=true;
            return;
        }

        // assumption that word is in capslocl
        int index = word[0] - 'A';
        TrieNode* child;

        //present -> move forward
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            // absent ->  create new node
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //Recursion substr(1).. word of next character
        insertUtil(child,word.substr(1));

    }
    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root, string word){
        // Base Case
        if (word.length()==0) 
        {
            return root->isTerminal; // if teriminal if it is true then true otherwise it is false
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index]!= NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        // Recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }
};




int main()  
{
    Trie* t = new Trie();
    t->insertWord("ABCD");
    t->insertWord("DU");
    t->insertWord("TIME");
    cout<<"Present or not "<<t->searchWord("ABC")<<endl;


    return 0;
}