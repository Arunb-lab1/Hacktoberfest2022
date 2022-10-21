#include <iostream>
using namespace std;

class Node
{
  public:
    int val;
    Node* left;
    Node* right;
    
    Node(int val){
       this->val=val;
       this->left=NULL;
       this->right=NULL;
    }
};
    
    void postTraversal(Node* root){
        if(!root)
            return ;
        postTraversal(root->left);
        postTraversal(root->right);
        cout<<root->val<<" ";
    }
    
    void preTraversal(Node* root){
        if(!root)
            return ;
        cout<<root->val<<" ";
        preTraversal(root->left);
        preTraversal(root->right);
    }
    
    void inTraversal(Node* root){
        if(!root)
            return ;
        inTraversal(root->left);
        inTraversal(root->right);
        cout<<root->val<<" ";
    }
    
    
   int main() {
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->left = new Node(6);
        root->right->right = new Node(7);
        
        
        inTraversal(root);
        cout<<endl;
        postTraversal(root);
        cout<<endl;
        preTraversal(root);
        return 0;
    }
