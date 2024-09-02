#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int top=-1,k=0,n=5;
int stk[10];
int gr[5][5]={{0,1,1,1,0},{1,0,0,0,0},{1,0,0,1,1},{1,0,1,0,0},{0,0,1,0,0}};;
int visited[100]={0};
int dfs[100]={0};

void DFS(int src)
{
    if(top!=-1)
    {
        src=stk[top];
        int i=0;
        for(i=0;i<n;i++)
        {
            if(gr[src][i]==1 && visited[i]!=1)
            {
                stk[++top]=i;
                visited[i]=1;
                dfs[k++]=i;
                break;
            }
        }
        if(i==n)
            top--;

        DFS(src);
    }
}

void display(int ar[],int n)
{
    cout<<"Elements are: "<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i];
}

int main()
{

    int i,j,d;
    int src=0;

    stk[++top]=src;
    dfs[k++]=src;
    visited[src]=1;

    DFS(src);
    display(dfs,n);
}
