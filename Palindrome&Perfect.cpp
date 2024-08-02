#include<iostream>
using namespace std;
int Palindrome(int rev,int n)
{
    if(n>0)
    {
        rev=rev*10+n%10;
        Palindrome(rev,n/10);

    }
    else
        return rev;
}

int Perfect(int n,int i)
{
    if(i<n)
    {
        if(n%i==0)
            return i+Perfect(n,i+1);
        else
            return 0+Perfect(n,i+1);
    }
    else
        return 0;
}
int main()
{
    int n,i=1;
    int rev=0;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int perfect=Perfect(n,i);
    int r=Palindrome(rev,n);
    if(n==r)
        cout<<"Yes ,It is a palindrome";
    else
        cout<<perfect;

}
