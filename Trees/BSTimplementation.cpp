#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
    void takeinput()
    {
        int data;
        cin>>data;
        while(data!=-1)
        {
            inserttobst(root,data);
            cin>>data;
        }
    }
};

void inserttobst(Node* &root,int d)
{
    //base case
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }
    if(d>root->data)
    {
        //right tree
        root->right=inserttobst(root->right);
    }
    else
    {
        root->left=inserttobst(root->left);
    }
}
void levelordertraversal(Node* root)
{
    //taking a queue to push elements
    //to represent in tree structure we use separator
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        /* code */
        //taking first ele and popping that ele
        Node* temp=q.front();
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
void inordertraversal(Node* root)
{
    //base case
    //LNR
    if(root==NULL)
      return;
    inordertraversal(root->left);
    cout<<root->data<<endl;
    inordertraversal(root->right);
}
void preordertraversal(Node* root)
{
    //base case
    //NLR
    if(root==NULL)
      return;
    
    cout<<root->data<<endl;
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(Node* root)
{
    //base case
    //LRN
    if(root==NULL)
      return;
    preordertraversal(root->left);
    
    preordertraversal(root->right);
    cout<<root->data<<endl;
}
Node* minval(Node* root)
{
    //means the leftmost value
    Node* temp=root->left;
    while (temp->left!=NULL)
    {
        /* code */
        temp=temp->left;
    }
    return temp;
    
}
Node* maxval(Node* root)
{
    //means the leftmost value
    Node* temp=root->right;
    while (temp->right!=NULL)
    {
        /* code */
        temp=temp->right;
    }
    return temp;
    
}
Node* deletefrombst(Node* root,int val)
{
    //base case
    if(root==NULL)
      return root;
    //no child of root
    if(root->data==val)
    {
        //0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child:left
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left ; //left me jao
            delete root;
            return temp;
        }
        //1 child:right
        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp=root->right ; //right me jao
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deletefrombst(root->right,mini);
            return root;
        }
    }
    else if(root->data>val)
    {
        //root data greater than val so go to left 
        root->left=deletefrombst(root->left,val);
        return root;
    }
    else
    {
        //right me jao
        root->right=deletefrombst(root->right,val);
        return root;
    }
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data for BST\n";
    takeinput(root);
    cout<<"\n Printing tree \n";
    levelordertraversal(root);
    return 0;

}