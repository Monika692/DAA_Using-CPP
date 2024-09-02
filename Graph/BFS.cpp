#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int q[MAX];
int gr[5][5]={{0,1,1,1,0},{1,0,0,0,0},{1,0,0,1,1},{1,0,1,0,0},{0,0,1,0,0}};
int bfs[10]={0};
int visited[10]={0};
int f=-1,r=-1,k=0,src=0,x,n=5;

void enqueue(int x)
{
    if(r==MAX-1)
        cout<<"Overflow";
    else
    {
        if(f==-1)
            f=0;

        r++;
        q[r]=x;
    }
}

int dequeue()
{
    int x=0;
    if(f==-1)
        x=-1;
    else
    {
        x=q[f];
        f++;

        if(f>r)
            f=r=-1;
    }
    return x;
}

void display(int ar[],int f1,int r1)
{
    for(int i=f1;i<r1;i++)
        cout<<ar[i]<<"\t";

}

void BFS(int src)
{
    while(src!=-1)
    {
        src=dequeue();
        int i=0;
        for(i=0;i<n;i++)
        {
           if(gr[src][i]==1 && visited[i]!=1)
           {
              enqueue(i);
              visited[i]=1;
              bfs[k++]=i;
           }
        }
        display(bfs,0,k-1);
        cout<<endl;
    }
}
int main()
{
    int i,j,d;
    /*
    cout<<"Enter No of Vertices";
    cin>>n;

    for(i=0;i<n;i++)
    {
        do{
            cout<<"Enter Connected Vertex - "<<i<<endl;
            cin>>d;
            if(d!=-1)
                gr[i][d]=1;
        }while(d!=-1);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(gr[i][j]!=1)
               gr[i][j]=0;

            cout<<gr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Enter source node :";
    cin>>src;
    */

    enqueue(src);
    bfs[k++]=src;
    visited[src]=1;
    BFS(src);

    display(bfs,0,n);
}
