/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
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
    
***********************************************************/
void inordertraversal(BinaryTreeNode<int> *root,int &count)
{   //left->node->right
    
    if(root==NULL)
     return;
    
    inordertraversal(root->left,count);
    if(root->left==NULL && root->right==NULL)
    {
        //lefa node is it
        //after inserting ele
        count++;
    }
    inordertraversal(root->right,count);
    

}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int cnt=0;
    inordertraversal(root,cnt);
    return cnt;
}