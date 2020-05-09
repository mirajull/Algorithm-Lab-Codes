#include<bits/stdc++.h>
using namespace std;
int ara[100];
int pos[100];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    ara[n]=1;
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]==0)
        {
            t++;
        }
    }
    if(t==n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    cout<<n-t<<endl;
    int start=1;
    int sesh=1;
    for(int i=0;i<n;i++)
    {
        if(ara[i+1]!=0)
        {
            cout<<start<<" "<<sesh<<endl;
            start=sesh;
            start++;
            sesh++;
        }
        else
        {
            sesh++;
        }
    }
    return 0;
}
