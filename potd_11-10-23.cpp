//DATE: 11/10/2023
//Given a binary tree, find if it is height balanced or not. 
//A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node * root)
    {
        if(root==NULL) return 0;
        return max(height(root->left) , height(root->right)) +1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL) return true;
       int diff = abs(height(root->left) - height(root->right));
        if(diff>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
