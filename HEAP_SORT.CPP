// Heap Sort using Max Heap C++ program 
#include <iostream>
using namespace std;
//**************************Swap**********************
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
//************************Print**********************
void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
//************************Max Heap*****************************
void max_heap(int A[],int root,int size)
{
    int left,right,high;
    left=root*2;
    right=root*2+1;
    high=root;
    if(left<size && A[left]>A[high])
    {
        high=left;
    }
    if(right<size && A[right]>A[high])
    {
        high=right;
    }
    if(root!=high)
    {
        swap(A[root],A[high]);
        max_heap(A,high,size);
    }
}
//***********************Heap Sort*******************************
void heap(int A[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        max_heap(A,i,n);
    }
    for(int s=n-1;s>=0;s--)
    {
        swap(A[0],A[s]);
        max_heap(A,0,s);
    }
}

//*****************************Main**********************
int main()
{
    int arr[50],size;
    cout<<"Enter Size :";
    cin>>size;
    cout<<"Enter Numbers :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting :"<<endl;
    print(arr,size);
    cout<<endl<<endl;
    heap(arr,size);
    cout<<"After Sorting :"<<endl;
    print(arr,size);

    return 0;
}