#include<bits/stdc++.h>
using namespace std;

vector<int>ara;

int main()
{
    int n,m,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ara.push_back(a);
    }
    sort(ara.begin(),ara.end());
    reverse(ara.begin(),ara.end());
    for(int i=0;i<n-2;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(ara[i]+ara[i+1]>=ara[n-1-j])
            {

            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

