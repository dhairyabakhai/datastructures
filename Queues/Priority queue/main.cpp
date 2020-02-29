#include <iostream>

using namespace std;
class queue
{public:
    int a[100];
    int front;
    int rear;
    int size;

    queue()
    {
        front=-1;
        rear=-1;
        size=0;
    }
    void enqueue(int z)
    {
        if(front==-1&&rear==-1)
        {
            rear++;
            front++;
            a[rear]=z;
            size++;
        }
        else
        {

            rear++;
            a[rear]=z;
            int i;
            /*for( i=size; i>=0; i--)
            {
                if (z<a[i-1])
                {
                    int temp=a[i-1];
                    a[i-1]=a[i];
                    a[i]=temp;

                }
                else break;

            }*/
            for(i=rear; i>=front; i--)
            {
                if(a[i]<a[i-1])
                {
                    int temp=a[i];
                    a[i]=a[i-1];
                    a[i-1]=temp;
                }
                else break;
            }

            size++;
        }
    }
    void dequeue()
    {
        front++;
        size--;

    }
    void printqueue()
    {
        for(int i=front; i<=rear;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{

    queue q;
    int x;
    xyz:
    cout<<"add 1; 2 delete; 3 print\n";
    cin>>x;
    switch(x)
    {
        case 1:
            int z;
            cout<< " enter element\n";
            cin>>z;
            q.enqueue(z);
            q.printqueue();

            goto xyz;

    case 3:
            q.printqueue();
            goto xyz;

    }
    return 0;
}
