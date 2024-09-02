#include<bits/stdc++.h>
#define MAX 10
using namespace std;
int q[MAX];
int gr[5][5]={{0,1,1,1,0},{1,0,0,0,0},{1,0,0,1,1},{1,0,1,0,0},{0,0,1,0,0}};
int bfs[10]={0};
int visited[10]={0};
int f=-1,r=-1,k=0,src=0,x,n=5;


void BFS(int src)
{
    if(f<=r)
    {
        src=q[f++];
        for(int i=0;i<n;i++)
        {
           if(gr[src][i]==1 && visited[i]!=1)
           {
              q[++r]=i;
              visited[i]=1;
              bfs[k++]=i;
           }
        }
        BFS(src);
    }
}

void display(int ar[],int f1,int r1)
{
    for(int i=f1;i<r1;i++)
        cout<<ar[i]<<"\t";

}

int main()
{
   int i,j,d;

    f+=1;
    q[++r]=src;
    bfs[k++]=src;
    visited[src]=1;
    BFS(src);

    display(bfs,0,n);
}
