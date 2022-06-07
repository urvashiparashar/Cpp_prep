// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
    
  public:
    ///approach-1:
    // int height(struct Node* node){
    //     // code here 
    //     if(node==NULL)
    //     {
    //         return 0;
    //     }
    //     int leftht=height(node->left);
    //     int rightht=height(node->right);
    //     int ans=max(leftht,rightht)+1;
    //     return ans;
    // }
    
    // Function to return the diameter of a Binary Tree.
    // int diameter(Node* root) {
    //     // Your code here
        
    //     //first approach: tc=O(n2)
    //     if(root==NULL)
    //     {
    //         return 0;
    //     }
    //     int op1=diameter(root->left);
    //     int op2=diameter(root->right);
    //     int op3=height(root->left)+height(root->right)+1;
        
    //     int ans=max(op1,max(op2,op3));
    //     return ans;
    // }
    
    //approach-2:
    pair<int,int>diafast(Node* root)
    {
        if(root==NULL)
        {
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        //for dia of left and right
        pair<int,int>leftdia=diafast(root->left);
        pair<int,int>rightdia=diafast(root->right);
        
        //left dia
        int op1=leftdia.first;
        //right dia
        int op2=rightdia.first;
        //using l-r ht and 1 for root node
        int op3=leftdia.second+rightdia.second+1;
        
        pair<int,int>ans;
        ans.first=max(op1,max(op2,op3));
        ans.second=max(leftdia.second,rightdia.second)+1;
        return ans;
        
    }
    int diameter(Node* root)
    {
        return diafast(root).first; //as we only need dia part of pair
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.diameter(root) << endl;
    }
    return 0;
}
  // } Driver Code Ends