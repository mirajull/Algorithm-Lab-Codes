#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    int ans;
    int temp=0;
    int rest=240-k;
    int i;
    for(i=1;i<=n;i++)
    {
        temp=5*i+temp;
        if(temp>rest)
        {
            break;
        }
    }
    ans=i-1;
    cout<<ans<<endl;
    return 0;
}
