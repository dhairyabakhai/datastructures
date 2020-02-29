#include<iostream>
using namespace std;
void swap (int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
void MaxHeapify (int a[], int n, int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && a[l]>a[largest]) 
        largest = l;
    if(r<n && a[r]>a[largest]) 
        largest = r;

    if(largest != i)
    {
        swap(a[i],a[largest]);
        MaxHeapify(a, n, largest);
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
    for(int i=n-1;i>=0;i--)
    {
        MaxHeapify(a,n,i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}