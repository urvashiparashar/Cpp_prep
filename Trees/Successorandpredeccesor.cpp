/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
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

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    BinaryTreeNode<int>* temp=root;
    int pred=-1;
    int succ=-1;
    while(temp->data!=key)
    {
        if(temp->data>key)
        {
            
            succ=temp->data; //store the successor then take it to left
            temp=temp->left;
        }
        else
            
        {
            //predecessor
            
            pred=temp->data;
            temp=temp->right;//store the predecssor then take it to right
        }
    }
    BinaryTreeNode<int>*lefttree=temp->left;
    while(lefttree!=NULL)
    {
        pred=lefttree->data;
        lefttree=lefttree->right;
    }
    BinaryTreeNode<int>*righttree=temp->right;
    while(righttree!=NULL) //if tree->data>key then it is successor
    {
        succ=righttree->data;
        righttree=righttree->left;
    }
    pair<int,int>ans=make_pair(pred,succ);
    return ans;
    
}
