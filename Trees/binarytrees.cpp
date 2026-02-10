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

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    return 0;

}

