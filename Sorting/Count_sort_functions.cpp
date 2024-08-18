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

void c_arr(int crr[],int arr[],int n)
{
    int mx=max(arr,n);
    for(int i=0;i<n;i++)
        crr[arr[i]]++;

    for(int i=1;i<=mx;i++)
        crr[i]+=crr[i-1];
}

void count_sort(int crr[],int arr[],int br[],int n)
{
    for(int i=0;i<n;i++)
    {
        crr[arr[i]]--;
        br[crr[arr[i]]]=arr[i];
    }
}

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int arr[100],crr[100]={0},br[100];
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++)
     cin>>arr[i];

    c_arr(crr,arr,n);
    count_sort(crr,arr,br,n);
    for(int i=0;i<n;i++)
     cout<<" "<<br[i];
}
