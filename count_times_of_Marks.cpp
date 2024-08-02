#include<iostream>
using namespace std;
int count(int R[],int n,int c)
{
    if(n>=0)
    {
        if(n==R[n-1])
          c++;

        return count(R,n-1)
    }
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int r[10];
    cout<<"Enter roll no";
    for(int i=0;i<n;i++)
        cin>>r[i];

    int s=c(R,n);
    if(s==0)
        cout<<"The count is"<<s;
    else
        cout<<"Unique roll nos"<<endl;
}
