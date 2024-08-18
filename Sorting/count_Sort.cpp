#include<iostream>
using namespace std;

int max(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i])
            maxi=arr[i];
    }
    return maxi;
}

int main()
{
    int n,arr[100],crr[100]={0},brr[100],c=0,i=0,sum=0;
    int mx=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    cout<<"Enter Elements in array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];

    mx=max(arr,n);
    for(i=0;i<n;i++)
    {
        crr[arr[i]]++;
    }
    for(i=0;i<=mx;i++)
        cout<<i<<" "<<crr[i]<<endl;

    for(int i=1;i<=mx;i++)
        crr[i]+=crr[i-1];

    for(i=0;i<=mx;i++)
        cout<<i<<" "<<crr[i]<<endl;

    for(i=0;i<n;i++)
    {
        crr[arr[i]]--;
        brr[crr[arr[i]]]=arr[i];
    }
    cout<<"========== Sorted Elements are =============="<<endl;
    for(i=0;i<n;i++)
        cout<<brr[i]<<" ";


}
