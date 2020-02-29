#include<iostream>
using namespace std;
void swap (int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
void MinHeapify (int a[], int n, int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && a[largest]>a[l]) largest=l;
    if(r<n && a[largest]>a[r]) largest =r;

    if(largest != i)
    {
        swap(a[largest],a[i]);
        MinHeapify(a,n,largest);
    }

}
int main()
{
    
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array: ";
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    for(int i=n/2-1;i>=0;i--)
    {
        MinHeapify(a,n,i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}