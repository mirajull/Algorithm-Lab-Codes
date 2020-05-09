#include<bits/stdc++.h>
using namespace std;
int color[100000];
vector<int>node[100000];
int main()

{
    int n,u,v;
    cin>>n;
    for(int i=1;i<n-1;i++)
    {
        cin>>u>>v;
        node[u].push_back(v);
        node[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        cin>>color[i];
    }

    int cnt;
    vector<int>::iterator it;
    for(int i=1;i<=n;i++)
    {
        cnt=0;
        it=node[i].begin();
        int s=color[*it];
        for(it=node[i].begin();it!=node[i].end();it++)
        {
            if(color[*it]!=s)
            {
              cnt++;
            }
        }
        if(cnt==0)
        {
            cout<<"YES"<<endl;
            cout<<i<<endl;
        }
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
