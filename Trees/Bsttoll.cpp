/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root,vector<int>&in)
{
    if(root==NULL)
        return ;
    inorder(root->left,in); //L
    in.push_back(root->data); //N
    inorder(root->right,in); //R
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<int>inorderval;
    inorder(root,inorderval);
    int n=inorderval.size();
    TreeNode<int>* newroot=new TreeNode<int>(inorderval[0]);
    TreeNode<int>* curr=newroot; //curr points to the newroot that is the first root
    //step-2:
    for(int i=1;i<n;i++)
    {
        //starting from 1
        TreeNode<int>* temp=new TreeNode<int>(inorderval[i]); 
        curr->left=NULL;
        curr->right=temp; //temp points to the node that starts at index 1
        curr=temp ; //everytime current node changes
    }
    //step-3:
    curr->left=NULL;
    curr->right=NULL; //both pointers to NULL
    return newroot; 
}
