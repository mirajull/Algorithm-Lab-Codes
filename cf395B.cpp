#include<bits/stdc++.h>
using namespace std;

long long ara[1000000];

int main()
{
    long long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(int i=0;i<n/2;i+=2)
    {
        swap(ara[i],ara[n-1-i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
    return 0;
}

