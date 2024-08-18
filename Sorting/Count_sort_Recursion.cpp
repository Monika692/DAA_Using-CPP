#include<iostream>
using namespace std;
int max(int arr[],int n,int i,int maxi)
{
   if(i<n)
   {
        if(maxi<arr[i])
            maxi=arr[i];

        max(arr,n,i+1,maxi);
   }
   else
        return maxi;
}

void c_arr(int arr[],int crr[],int n)
{
    int mx=max(arr,n,0,arr[0]);

    for(int i=0;i<n;i++)
        crr[arr[i]]++;

    for(int i=1;i<=mx;i++)
        crr[i]+=crr[i-1];
}
void Count_sort(int arr[],int br[],int crr[],int n,int i)
{
    if(i<n)
    {
        crr[arr[i]]--;
        br[crr[arr[i]]]=arr[i];

        Count_sort(arr,br,crr,n,i+1);
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

    c_arr(arr,crr,n);
    Count_sort(arr,br,crr,n,0);
    for(int i=0;i<n;i++)
     cout<<" "<<br[i];
}
