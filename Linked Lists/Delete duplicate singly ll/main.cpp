

#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* next;
};
void printlist(node* n)
{
	while(n!=NULL)
	{ cout<<n->data<<" ";
	n=n->next;
	}
}
int main()
{
	node* header=NULL;
	node* head= new node();
	node* second=new node();
	node* third = new node();
	node* fourth = new node();
	node* tail= new node();

	header= head;
	head->data=1;
	head->next=second;

	second->data=2;
	second->next=third;

	third->data=1;
	third->next=fourth;

	fourth->data=2;
	fourth->next=tail;

	tail->data=1;
	tail->next=NULL;

	node* temp1=head;
	node* temp2=temp1;

	while(temp1 ->next->next!=NULL)
    {
        temp2=temp1;
        while(temp2->next!=NULL)
        {
            if(temp1->data==temp2->next->data)
            {
                //node* temp3=temp2->next;
                temp2->next=temp2->next->next;
                //delete temp3;

            }
            else
            {
                temp2=temp2->next;
            }
        }
        temp1=temp1->next;
    }




	printlist(head);
	return 0;
}


