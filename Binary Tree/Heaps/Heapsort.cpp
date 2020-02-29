#include<iostream>
using namespace std;
void swap (int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
void Heapify (int a[], int n, int i)
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
        Heapify(a, n, largest);
    }

}
void HeapSort(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        Heapify(a,n,i);
    }

    for(int i=0;i<n; i++)
    {
        swap(a[0],a[n-i-1]);

        Heapify(a,n-1-i,0);
        
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
    HeapSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}