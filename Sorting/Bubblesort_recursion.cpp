#include<iostream>
using namespace std;
void

Bubble(int arr[],int i,int n)
{
    if(i<n)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        Bubble(arr,i+1,n);
    }
}
int main()
{
    int n,i=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    Bubble(arr,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
