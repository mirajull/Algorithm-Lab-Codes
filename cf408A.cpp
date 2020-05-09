#include<bits/stdc++.h>
using namespace std;
int a[1000];

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int ans=0;

    for(int i=1;i<=n;i++)
    {
        if(a[m+i]<=k && a[m+i]!=0 && (m+i)<=n)
        {
            ans=i*10;
            break;
        }
        if(a[m-i]<=k && a[m-i]!=0 && (m-i)>=1)
        {
            ans=i*10;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
