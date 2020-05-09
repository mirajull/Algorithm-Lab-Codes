#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int f=0,n,m,k,ans,ekjoner_vag,use_me;
    cin>>n>>m>>k;
    long long int temp;
    temp=n*(n-1)/2;
    use_me=n;
    while(m<=temp)
    {
        use_me--;
        temp=use_me*(use_me-1)/2;
        f++;
    }

    temp=m-temp;
    ekjoner_vag=temp/n;
    ans=ekjoner_vag;
    if(k>f||k<n-f)
    {
        ans=ans+max(k-f-1,n-k-f+1);
    }
    if(temp%n!=0)
    {
        if(temp%n >=k)
        {
            ans++;
        }

    }
    cout<<ans<<endl;
    return 0;
}

