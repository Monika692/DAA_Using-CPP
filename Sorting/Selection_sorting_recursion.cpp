#include<iostream>
using namespace std;
void Selection_Sort(int arr[],int n,int i)
{
    if(i<n)
    {
        int min=arr[i];
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                pos=j;
            }
        }
        if(pos!=i)
        {
            arr[pos]=arr[i];
            arr[i]=min;
        }
        Selection_Sort(arr,n,i+1);
    }
}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter Elements in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    Selection_Sort(arr,n,0);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
