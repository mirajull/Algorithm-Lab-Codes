#include<iostream>
using namespace std;

class DFS
{
public:
    int n,x,time;
    int **node,*color,*startt,*endt,*root;
    DFS(int a)
    {
        n=a;
        node=(int**)new int *[n+1];
        for(int i=0;i<=n+1;i++)
        {
            node[i]=new int[n+1];
        }
        startt=new int[n+1];
        endt=new int[n+1];
        root=new int[n+1];
        color=new int[n+1];
        for(int i=1;i<=n;i++)
        {
            startt[i]=0;
            endt[i]=0;
            root[i]=0;
            color[i]=-1;
            for(int j=1;j<=n;j++)
            {
                node[i][j]=0;
            }
        }
    }
    void setedge(int a,int b)
    {
        node[a][b]=1;
        root[b]=a;
    }
    void visit(int a)
    {
        color[a]=1;
        time++;
        startt[a]=time;
        for(int i=1;i<=n;i++)
        {
            if(node[a][i]==1)
            {
                if(color[i]==-1)
                {
                    visit(i);
                }
            }
        }
        color[a]=0;
        time++;
        endt[a]=time;
    }
    void Sort()
    {
        time=0;
        for(int i=1;i<=n;i++)
        {
            if(root[i]==0)
            {
                x=i;
                break;
            }
        }
        visit(x);
        for(int i=1;i<n;i++)
        {
            if(color[i]==-1)
            {
                visit(i);
            }
        }
    }

};
int main()
{
    int n,a,b,u,v;
    cin>>n;
    DFS ob(n);

    for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        ob.setedge(a,b);
    }
    ob.Sort();
    while(cin>>u && cin>>v)
    {
        if(ob.startt[u]<ob.startt[v]&&ob.endt[u]>ob.endt[v])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
