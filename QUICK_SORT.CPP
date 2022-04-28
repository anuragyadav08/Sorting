// Quick Sort C++ program 
#include <iostream>
using namespace std;
//*********************************Print****************
void Print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
//*******************************Swap***************************
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//***************Partition*************************
int Partition(int A[],int low,int high)
{
    int pivot,i,j;
    pivot=A[low];
    i=low+1;
    j=high;
    do
    {
        while(A[i]<=pivot)
        {
            i++;
        }
         while(A[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }
    while(i<j);
    swap(A[low],A[j]);
    return j;
}
//*************************Quick Sort********************
void Quick_sort(int A[],int low,int high)
{
    int index;
    if(low<high)
    {
        index=Partition(A,low,high);
        Quick_sort(A,low,index-1);
        Quick_sort(A,index+1,high);
    }
}
//*********************Main**********************
int main()
{ 
    int arr[50],size;
    cout<<"Enter Size :";
    cin>>size;
    cout<<"Enter Numbers :\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting :"<<endl;
    Print(arr,size);
    cout<<endl<<endl;
    Quick_sort(arr,0,size-1);
    cout<<"After Sorting :"<<endl;
    Print(arr,size);
    
    return 0;
}