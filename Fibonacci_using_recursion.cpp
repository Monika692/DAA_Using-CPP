d#include<iostream>
using namespace std;
void fibo(int a, int b,int n)
{
    int c=a+b;
    if(a<n)
    {
        int f=1,j=1;
        for(j=1;j<=a;j++)
            f=f*j;

        cout<<a<<" "<<f<<endl;
        fibo(b,c,n);
    }
}
int main()
{
    fibo(0,1,50);
}
