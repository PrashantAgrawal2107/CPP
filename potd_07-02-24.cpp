// Min distance between two given nodes of a Binary Tree


// Given a binary tree with n nodes and two node values, a and b, your task is to find the minimum distance between them.
// The given two nodes are guaranteed to be in the binary tree and all node values are unique.



// Simple C++ Solution -->>

// 1. First find LCA(Lowest Common Ancestor).
// 2. Find distance of each node from the LCA by using a function similar to find height of tree.
// 3. Return sum of both the distance.

 

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node * lca(Node * root , int n1 , int n2){
        if(root==NULL) return NULL;
        if(root->data==n1 || root->data==n2) return root;
        
        Node * left_lca = lca(root->left,n1,n2);
        Node * right_lca = lca(root->right,n1,n2);
        
        if(left_lca!=NULL && right_lca!=NULL) return root;
        if(left_lca!=NULL) return left_lca;
        else return right_lca;
    }
    
    int height(Node *root , int n){
        if(root==NULL) return -100000;
        if(root->data==n) return 0;
        return max(height(root->left,n),height(root->right,n))+1;
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node *common = lca(root,a,b);
        return height(common,a)+height(common,b);
    }
};
