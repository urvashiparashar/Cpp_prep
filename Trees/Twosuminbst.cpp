// Following is the Binary Tree node structure
/**************
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
***************/
void inorder(BinaryTreeNode<int>* root,vector<int>&in)
{
    if(root==NULL)
        return ;
    //LNR
    inorder(root->left,in);
    //took vector to push values in order way
    in.push_back(root->data);
    inorder(root->right,in);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int>inorderval;
    //calling the inorder function
    inorder(root,inorderval);
    //two pointer approach
    int i=0;
    int j=inorderval.size()-1; //pointer pointing to last ele of the vector
    while(i<j)
    {
        ///comparing each value pointing by i and j
        int sum=inorderval[i]+inorderval[j];
        if(sum==target)
        {
            return true;
        }
        //else if sum is greater than target
        else if(sum>target)
        {
            //make j pointer less;
            j--;
        }
        else
        {
            //sum is smaller than target
            i++;
        }
    }
    //if while not true then return false;
    return false;
}