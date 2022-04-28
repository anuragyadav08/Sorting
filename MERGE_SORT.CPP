// Merge Sort C++ program
#include <iostream>
using namespace std;
//**************************Print*******************
void Print(int A[],int n)
{
   for(int i=0;i<n;i++)
   {
       cout<<A[i]<<" ";
   }
}
//**************************Merge*******************
void Merge(int A[],int left,int mid,int right)
{
    int i,j,k,LA[25],RA[25],n1,n2;
    n1=mid-left+1;
    n2=right-mid;
    for(i=0;i<n1;i++)
    {
        LA[i]=A[left+i];
    }
    for(j=0;j<n1;j++)
    {
        RA[j]=A[mid+1+j];
    }
    i=0;
    j=0;
    k=left;
    while(i<n1 && j<n2)
    {
        if(LA[i]<=RA[j])
        {
            A[k]=LA[i];
            i++;
        }
        else
        {
            A[k]=RA[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        A[k]=LA[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        A[k]=RA[j];
        j++;
        k++;
    }
}
//*************Divide **************************
void Merge_sort(int A[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        Merge_sort(A,left,mid);
        Merge_sort(A,mid+1,right);
        Merge(A,left,mid,right);
    }
}
//*****************Main***********************
int main() 
{
    int arr[50],size;
    cout<<"Enter Size :";
    cin>>size;
    cout<<"Enter Numbers :";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting  :"<<endl;
    Print(arr,size);
    cout<<endl<<endl;
    Merge_sort(arr,0,size-1);
    Print(arr,size);
    return 0;
}