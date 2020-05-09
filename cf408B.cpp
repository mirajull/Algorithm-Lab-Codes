#include<bits/stdc++.h>
using namespace std;

long ara[1000000];

bool in(long x,long n)
{
    for(long i=0;i<n;i++)
    {
        if(ara[i]==x){return true;}
    }
    return false;
}

int main()
{

    long n,m,k;
    cin>>n>>m>>k;
    for(long i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    long u,v,ans=0,f=0;
    for(long i=0;i<k;i++)
    {
        cin>>u>>v;
        if(in(u,n) && f==0)
        {
            ans=u;
            f++;
        }
        if(in(v,n) && f==0)
        {
            ans=v;
            f++;
        }
    }
    if(ans==0){ans=v;}
    cout<<ans<<endl;
    return 0;
}

