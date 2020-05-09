#include<bits/stdc++.h>
using namespace std;

#define MAX 100
#define INF 100000

int augmenting_path(int temp[MAX][MAX],int s,int t,int ancestor[])
{
    queue<int>q;
    bool reachable[MAX];
    for(int i=1;i<=t;i++)
    {
        reachable[i]=0;
    }
    q.push(s);
    reachable[s]=true;
    ancestor[s]=-1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v=0; v<MAX; v++)
        {
            if (reachable[v]==false&&temp[u][v] > 0)
            {
                q.push(v);
                ancestor[v] = u;
                reachable[v] = true;
            }
        }
    }
    if(reachable[t]==true)
    {
        return true;
    }
    return false;
}

void dfs(int temp[MAX][MAX], int s, bool reachable[])
{
    reachable[s]=true;
    for(int i=1;i<MAX;i++)
    {
       if(temp[s][i]&&!reachable[i])
       {
          dfs(temp,i,reachable);
       }
    }
}

void mincut_maxflow(int graph[MAX][MAX], int s, int t)
{
    int ancestor[MAX];
    int residual[MAX][MAX];
    bool reachable[MAX];

    for(int i=0;i<t;i++)
    {
        reachable[i]=false;
    }

    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
             residual[i][j]=graph[i][j];
        }
    }
    int total=0;
    while (augmenting_path(residual,s,t,ancestor))
    {
        int taken=INF;
        int v=t;
        while(v!=s)
        {
            int u=ancestor[v];
            taken=min(taken,residual[u][v]);
            v=ancestor[v];
        }
        int x=t;
        while(x!=s)
        {
            int u=ancestor[x];
            residual[u][x]=residual[u][x]- taken;
            residual[x][u]=residual[u][x]+ taken;
            x=ancestor[x];
        }
        total=total+taken;
    }

    dfs(residual,s,reachable);

    for(int i=0;i<MAX;i++)
    {
      for (int j=0;j<MAX;j++)
      {
          if (reachable[i]&&!reachable[j] && graph[i][j])
             {
                cout <<i<<" "<<j<< endl;
             }
        }
    }
    cout<<"Total Value: "<<total<<endl;
    return;
}

int main()
{
    int graph[MAX][MAX];
    int t,vertex,e,u,v,w;
    cin>>t;
    int k=0;
    while(t>0)
    {

        k++;
        cin>>vertex;
        cin>>e;
        for(int i=0;i<e;i++)
        {
            cin>>u>>v>>w;
            graph[u][v]=w;
        }
        cout<<endl;
        cout<<"Case: "<<k<<endl;
        mincut_maxflow(graph,1,vertex);
        t--;
    }
    return 0;
}
