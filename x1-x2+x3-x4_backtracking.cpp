#include<iostream>
#include<math.h>
using namespace std;
int sum(int n,int x,int s)
{
    if(n>0)
    {
        if(n%2==1)
            s+=pow(x,n);
        else
            s-=pow(x,n);

        sum(n-1,x,s);
    }
    else
        return s;
}
int main()
{
    int answer=sum(3,2,0);
    cout<<answer;
}
