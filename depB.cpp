#include<bits/stdc++.h>
using namespace std;



int main()
{
    string a,b;
    int m,n;
    cin>>m>>n;
    set<string>s;
    string aram[1000],aran[1000];
    for(int i=0;i<m;i++)
    {
        cin>>aram[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>aran[i];
    }
    int cntm=0;
    int cntn=0;
    for(int i=0;i<max(m,n);i++)
    {
        int temp=s.size();
        s.insert(aram[i]);
        if(s.size()>temp)
        {
            if(i+1<=m)
            {
                cntm++;
            }
        }
        temp=s.size();
        s.insert(aran[i]);
        if(s.size()>temp)
        {
            if(i+1<=n)
            {
                cntn++;
            }
        }
    }
    //cout<<cntm<<cntn<<endl;
    if(cntm>cntn)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
