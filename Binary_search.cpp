#include<iostream>
using namespace std;
int Binary_search(int arr[],int low,int high,int s)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==s)
            return arr[mid];
        else if(arr[mid]>s)
            return Binary_search(arr,low,mid-1,s);
        else
            return Binary_search(arr,mid+1,high,s);
    }
    else
        return -1;
}
int main()
{
    int n,mid,low,high;
    cout<<"Enter size:"<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter element in array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int s;
    cout<<"Enter the element to be searched"<<endl;
    cin>>s;


    low=0;
    int show=Binary_search(arr,low,n-1,s);
    if(show!=-1)
        cout<<"the result is :"<<show<<endl;
    else
        cout<<"Not found"<<endl;
}
