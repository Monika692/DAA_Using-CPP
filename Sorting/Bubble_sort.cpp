#include<iostream>
using namespace std;
int Bubblesort(int arr[],int n,int i)
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
         Bubblesort(arr,n,i+1);
    }
}
int main()
{
  int n,i;
  cout<<"Enter Size :"<<endl;
  cin >>n;

  int arr[100];
  cout<<"Enter the elements in array"<<endl;
  for(i=0;i<n;i++)
        cin>>arr[i];

  Bubblesort(arr,n,i);
   for(i=0;i<n;i++)
        cout<<arr[i];
}
