/*************************************************************
    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode 
    {
      public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

bool validateBST(BinaryTreeNode<int>* root,int min,int max) 
{
    // Write your code here
    //base case
    if(root==NULL)
        return true;
    //checking node
    if(root->data>=min && root->data<=max)
    {
        bool left=validateBST(root->left,min,root->data);
        bool right=validateBST(root->right,root->data,max);
        return left && right;
    }
    else
    {
        return false;  //tc=o(n) sc=o(h) //height of tree fue to recursion in stack
    }
}