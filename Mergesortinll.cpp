/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/
node* findmid(node* head)
{
	node* slow=head;
	node* fast=head->next;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
node* merge(node* left,node* right)
{
	if(left==NULL) //if left ll is null
		return right;
	if(right==NULL) //if right ll is null
		return left;
	node* ans=new node(-1); //dummy node
	node* temp=ans; //temp pointing to ans
	while(left!=NULL && right!=NULL)
	{
		if(left->data<right->data)
		{
			temp->next=left;
			temp=left;
			left=left->next;
		}
		else
		{
			temp->next=right;
			temp=right;
			right=right->next;
		}
	}
	while(left!=NULL) //leftkahatm nhi hui h
	{
		temp->next=left;
			temp=left;
			left=left->next;
	}
	while(right!=NULL)
	{
		temp->next=right;
			temp=right;
			right=right->next;
	}
	ans=ans->next;//ans pointer ko aage badaho
	return ans;
}
node* mergeSort(node *head) {
    // Write your code here.
	
	//if list is null or only one ele
	if(head==NULL || head->next==NULL)
	{
		//already sorted
		return head;
	}
	//break ll in 2 halves
	node* left=head;
	
	//for middle node
	node* mid=findmid(head);
	node* right=mid->next;
	mid->next=NULL;//for left ll
	//sort using mergesort left and right
	left=mergeSort(left);
	right=mergeSort(right);
	//merge both ll
	node* res=merge(left,right);
	
	return res;
	
	
}
