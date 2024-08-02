#include<iostream>
#include<math.h>
using namespace std;
void fact(int i,int n,int x)
{
    if(i<=n)
    {
        if(i%2==0)
        {
            cout<<pow(x,i)<<"-";
        }
        else
        {
            cout<<pow(x,i)<<"+";
        }
        fact(i+1,n,x);
    }
}
int main()
{
    fact(1,10,2);
}
