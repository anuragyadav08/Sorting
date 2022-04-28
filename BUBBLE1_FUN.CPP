// Normal Bubble Sorting using Function 
#include <iostream>
using namespace std;
void bubble(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Numbers are : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    } 
}
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
   
    bubble(arr,size);
    return 0;
}