#include <bits/stdc++.h>

using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void printList(node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{


    node* head=new node();
    node* second= new node();
    node* third = new node();
    node* fourth = new node();
    node* tail=new node();

    head->data=1;
    head->next=second;

    second-> data=2;
    second-> next=third;

    third-> data =3;
    third->next=fourth;

    fourth->data = 4;
    fourth->next=tail;

    tail->data = 5;
    tail->next=NULL;

    printList(head);
    node* header=head;
    
    //Swap nodes 4 & 3

    int n1=4;
    int n2=3;
    node* temp1= header;
    node* temp2=header;
    for(int i=0; i<n1-1; i++)
    {
        temp1=temp1->next;
    }
    for(int i=0; i<n2-1;i++)
    {
        temp2 =temp2->next;
    }

    node* temp3 = temp1;
    temp1->next = temp2->next;
    temp1->next->next=temp2->next->next;
    temp2->next=temp3->next;
    temp2->next->next=temp3->next->next;
    printList(header);

return 0;
}
