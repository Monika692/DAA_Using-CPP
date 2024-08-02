#include<iostream>
#include<math.h>
using namespace std;
void fact(int i,int x,int n)
{
    if(i<=n)
    {
        cout<<pow(x,i)<<", ";
        fact(i+1,x,n);
    }
}
int main()
{
    int i,n,x;
    fact(1,2,10);
}
