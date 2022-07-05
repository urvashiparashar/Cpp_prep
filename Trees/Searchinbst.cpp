/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     // Write your code here.
    
//     //base case
//     if(root==NULL)
//         return false;
//     //if ele is found then the x is equal to root->data
//     if(root->data==x)
//         return true;
//     if(root->data>x)
//     {   //left part me jao that is shorter
//         return searchInBST(root->left,x);
//     }
//     else
//     {
//         //right part me jao that is shorter
//         return searchInBST(root->right,x);
//     }
// }
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    
    BinaryTreeNode<int> *temp=root;
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            return true;
        }
        if(temp->data>x)
        {
            //temp ka data bada h x se toh left part me jao
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    //if not equal to while then return false
    return false;
}
