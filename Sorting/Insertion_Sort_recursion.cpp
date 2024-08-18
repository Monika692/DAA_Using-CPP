#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n,int i)
{
    if(i<n)
    {
        int min=arr[i];
        int j=0;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>min)
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=min;
        Insertion_sort(arr,n,i+1);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter array in elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    Insertion_sort(arr,n,1);
    for(int i=0;i<n;i++)
       cout<<arr[i];
}
