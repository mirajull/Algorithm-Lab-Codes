#include<bits/stdc++.h>
using namespace std;
long ara[200000];
long m=INFINITY;
int cnt=0;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+t);
    for(int i=1;i<t;i++)
    {
        int dif=max(ara[i],ara[i-1])-min(ara[i],ara[i-1]);
        if(dif<m)
        {
            m=dif;
            cnt=0;
        }
        if(dif==m)
        {
            cnt++;
        }
    }

    cout<<m<<" "<<cnt<<endl;

    return 0;
}
