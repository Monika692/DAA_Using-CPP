#include<iostream>
using namespace std;
int PrimeNumber(int n,int i)
{
    if(i<n)
    {
        if(n%i==0)
            return 1;

        PrimeNumber(n,i+1);
    }
    else
        return 0;

}
int Automorphic(int n,int square)
{
    if(n>0)
    {
        square=n*n;
        Automorphic(n/100,square);
    }
    else
        return 0;
}

int main()
{
    int n,i=2,square=0;
    cout<<"Enter your number :"<<endl;
    cin>>n;
    int prime=PrimeNumber(n,i);
    cout<<"Prime number"<<prime<<endl;
    int morphic=Automorphic(n,square);
        cout<<"Automorphic Number :"<<morphic<<endl;
}
