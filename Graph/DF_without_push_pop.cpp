#include<bits/stdc++.h>
#define Max 5
using namespace std;

int top=-1,k=0,n=5;
int stk[10];
int gr[5][5]={{0,1,1,1,0},{1,0,0,0,0},{1,0,0,1,1},{1,0,1,0,0},{0,0,1,0,0}};;
int visited[100]={0};
int dfs[100]={0};

void display(int ar[],int n)
{
    cout<<"Elements are: "<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i];
}

void DepthFirstSearch_1(int src)
{
    while(top!=-1)
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
    }
}

int main()
{
    int i,j,d;
    int src=0;
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



    cout<<"Enter source node :";
    cin>>src;
*/

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

    stk[++top]=src;
    dfs[k++]=src;
    visited[src]=1;

    DepthFirstSearch_1(src);
    display(dfs,n);
}
