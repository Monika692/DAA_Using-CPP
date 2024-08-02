#include<iostream>
using namespace std;
int sum=0;
void fact(int n)
{
    if(n>0)
    {
        int d=n%10;
        sum=sum+d;
        fact(n/10);
    }

}
int main()
{
    fact(486);
    cout<<"Sum is "<<sum;
}
