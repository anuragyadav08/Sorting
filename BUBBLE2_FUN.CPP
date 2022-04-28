// Efficient Bubble Sorting using Function 
#include <iostream>
using namespace std;
void bubble(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int flag;
        for(int j=0;j<size-1-i;j++)
        {   
            flag=0;
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
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