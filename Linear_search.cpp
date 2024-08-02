#include<iostream>
using namespace std;

/*int f=0;
void LinearSearch(int arr[],int n,int s)
{
    if(n>=0)
    {
        if(arr[n]==s)
            f=1;

        LinearSearch(arr,n-1,s);
    }
}*/

int LinearSearch1(int arr[],int n,int s)
{
    if(n>=0)
    {
        if(arr[n]==s)
            return 1;
        else
           LinearSearch1(arr,n-1,s);
    }
    else
       return 0;
}

int main()
{
   int n,arr[100],s;
   cout<<"enter the size of array"<<endl;
   cin>>n;
   cout<<"Enter the array"<<endl;
   for(int i=0;i<n;i++)
        cin>>arr[i];

   cout<<"Enter the number to be searched"<<endl;
   cin>>s;

  /* LinearSearch(arr,n,s);
   if(f==1)
        printf("Number Exist in Array  ");
    else
        printf("Number not found  ");*/


    int search=LinearSearch1(arr,n,s);
    if(search==1)
        cout<<"Found";
    else
        cout<<"Not Found";
}
