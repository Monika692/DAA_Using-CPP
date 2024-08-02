#include<iostream>
using namespace std;
int countDigit(int n)
{
    if(n>0)
        return 1+countDigit(n/10);
    else
        return 0;
}
int main()
{
    int answer=countDigit(48621);
    cout<<"the answer is:"<<answer<<" ";
}
