#include<iostream>
#include<math.h>
using namespace std;
int Max_num(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i])
            maxi=arr[i];
    }
    return maxi;
}

int count_dig(int maxi)
{
    int count=0;
    while(maxi!=0)
    {
         maxi=maxi/10;
        count++;
    }
    return count;
}

int getDig(int n,int k)
{
    int dig=0;
    int ans=(int)pow(10,k);
    n=n/ans;
    dig=n%10;

    return dig;
}
void Radix_sort(int arr[],int n)
{
    int brr[n];
    int maximum=Max_num(arr,n);
    int c=count_dig(maximum);
    int p=0;
    while(p<c)
    {
        int crr[10]={0};
        for(int i=0;i<n;i++)
        {
            int d=getDig(arr[i],p);
            crr[d]++;
        }

        for(int i=1;i<10;i++)
        {
           crr[i]+=crr[i-1];
        }
        cout<<"\nCount - \n";
        for(int i=0;i<10;i++)
        {
            cout<<i<<" "<<crr[i]<<endl;
        }

        cout<<"\n Last Digits \n";
        for(int i=n-1;i>=0;i--)
        {
            int d=getDig(arr[i],p);
            cout<<"Value of D "<<d<<endl;
            crr[d]--;
            brr[crr[d]]=arr[i];
        }

        cout<<"\nOriginal Array  \n";
        for(int i=0;i<n;i++)
        {
            arr[i]=brr[i];
            cout<<brr[i]<<endl;
        }
    p++;
    }
}
int main()
{
    /*int n,k=0;
    cout<<"Enter the size :";
    cin>>n;

    int arr[100];
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
*/
    int n=7;
    int arr[]={28,7,863,45,763,54,101};

    //cout<<"The highest number of digit :"<<c<<endl;
    Radix_sort(arr,n);

   /*
    int ans=getDig(1045,0);
    cout<<"\n"<<ans;
    ans=getDig(1045,1);
    cout<<"\n"<<ans;
    ans=getDig(1045,2);
    cout<<"\n"<<ans;
    ans=getDig(1045,3);
    cout<<"\n"<<ans;
*/

}
