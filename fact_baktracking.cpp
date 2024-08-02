#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}

float series(int i,int n,float x)
{
    if(i<=n)
        return x/fact(i)+series(i+1,n,x);
    else
        return 0;
}
int main()
{
    float ans=series(1,5,2);
    cout<<ans;
}
