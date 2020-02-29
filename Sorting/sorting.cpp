#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void SelectionSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void BubbleSort(int a[],int n)
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}
void InsertionSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int value=a[i];
        int hole=i;
        while(hole>0&& a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=value;
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void DefaultSort(int a[], int n)
{
    sort(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<< " ";

}

int main()
{
    cout<<"Enter the no of elements you want in your array\n";
    int n;
    cin>>n;
    cout<<"Enter elements\n";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"press 1 for selection sort, 2 for bubblesort, 3 for insertion sort , 4 for default sort\n";
    int x;
    cin>>x;
    if (x==1)
    {
        SelectionSort(a,n);
    }
    else if (x==2)
    {
        BubbleSort(a,n);
    }
    else if(x==3)
    {
        InsertionSort(a,n);
    }
    else if (x==4)
    {
        DefaultSort(a,n);
    }
    return 0;
}
