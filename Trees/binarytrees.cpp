// Generic tree 
//trees ka data node me store hota hai
//Root Node =>> node jaha se tree generate hota hai root node hoti hai
// leaf Node ->> Last node of a tree of each branch
// Height of tree =>> Total level of the tree or total length of the tree from depest node  of the tree from the root node
//subtree =>> a small part of a tree 
// 
////// Recursion //////
// for  solve the  recursion in the tree   
// first    solve left subtree
/// then  recursively solve the right subtree
// calculate the solution for the root


///// Build A Binary tree /////

// class Node {
//int data;
//Node* left;
//Node* right;
//};

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;

}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = buildTree(preorder);
    cout << root->data <<endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    cout << root->right->left->data << endl;
    cout << root->right->right->data << endl;
    cout << root->right->right->left << endl;
    return 0;

}
// preorder sequence =>> Root Left Right 
 
