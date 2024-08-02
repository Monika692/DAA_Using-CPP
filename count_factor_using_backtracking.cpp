#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}
int count(int i,int n)
{
    if(i<=n)
    {
        if(n%i==0)
            return 1+count(i+1,n);
        else
            return 0+count(i+1,n);
    }
    else
        return 0;
}
int main()
{
    fact(5);
    int ans=count(1,10);
    cout<<ans;
}
