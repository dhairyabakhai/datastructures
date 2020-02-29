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


    /*node* head=new node();
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
    node* header=head;*/
    node* header=NULL;
    xyz:
    cout<<"\n1- delete head 2-delete tail 3-delete certain element 4-add header 5- add tail 6- add before an element 7-exit\n";
    int n;
    cin>>n;

    switch(n)
   {

    case 1:
    {
        node* temp=header->next;
        delete header;
        header=temp;
        printList(header);
        goto xyz;
        //done
    }
    case 2:
    {
        node* temp=header;
        node* temp1=temp;
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        delete temp;
        temp1->next=NULL;
        printList(header);
        goto xyz;
        //done


    }
    case 3:
    {
        cout<<"enter the element you want to delete\n";
        int x;
        cin>>x;
        node* current= header;
        node* previous=current;
        while(current->data!=x)
        {
            previous = current;
            current=current->next;
        }
        //cout<<current->data;

        previous->next=current->next;
        delete current;
        printList(header);
        goto  xyz;
        //done
    }
    case 4:
        {
            cout<<"Enter the number you want to add at the beginning"<<endl;
            node* n=new node();
            cin>>n->data;
            n->next=header;
            header=n;
            printList(header);
            goto xyz;
            //done
        }
    case 5:
        {
            cout<<"Enter the number you want to add at the end"<<endl;
            node* n=new node();
            node* temp=header;
            cin>>n->data;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            n->next=NULL;
            temp->next=n;
            printList(header);
            goto xyz;
            //done
        }
    case 6:
        {
            cout<<"enter the element before which you want to add"<<endl;
            int n;
            cin>>n;

            node* current=header;
            node* previous=current;
            while(current->data!=n)
            {
                previous=current;
                current=current->next;
            }
            cout<<"enter what you want to add"<<endl;
            node* middle = new node();
            cin>>middle->data;
            middle->next=current;
            previous->next=middle;

            printList(header);
            goto xyz;
            //done
        }
    default: break;
   }

return 0;
}
