#include<iostream>
using namespace std;
void fact(int i,int n,float x)
{
    if(i<=n)
    {
        int f=1;
        for(int j=1;j<=i;j++)
            f=f*j;

        cout<<x/f<<"+";
        fact(i+1,n,x);

    }
}
int main()
{
    fact(2,4,1);
}
