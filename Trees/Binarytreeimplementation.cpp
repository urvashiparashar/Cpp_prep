#include<bits/stdc++.h>
using namespace std;
class node
{   public:
    int data;
    node* left;
    node* right;
    public:
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }

};
node* buildtree(node* root)
{
    cout<<"enter data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"enter data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}
void levelordertraversal(node* root)
{
    //taking a queue to push elements
    //to represent in tree structure we use separator
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        /* code */
        //taking first ele and popping that ele
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            //when we encounter null we will give endl
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)//temp->left is not null
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                //temp->right is not null
                q.push(temp->right);
            }
        }
    }
    
}

void preordertraversal(node* root)
{   //node ->left->right
    if(root==NULL)
     return;
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
    cout<<endl;

}
void postordertraversal(node* root)
{   //left->right->node
    if(root==NULL)
     return;
    
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
    

}
void inordertraversal(node* root)
{   //left->node->right
    cout<<endl;
    if(root==NULL)
     return;
    
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
    cout<<endl;

}
int main()
{
    node* root=NULL;
    root=buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelordertraversal(root);
    preordertraversal(root);
    postordertraversal(root);
    inordertraversal(root);
    return 0;
}