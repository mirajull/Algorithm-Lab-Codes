#include<bits/stdc++.h>
using namespace std;

long ara[100000];
int asol[100000];

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>ara[i];
    }
    for(int i=0;i<n;i++)
    {
        asol[i]=i+1;
    }

    long temp=1;

    for(int i=0;i<k;i++)
    {
        temp=temp+ara[i];
        temp=temp%n;
        if(temp==0)
        {
            temp=n;
        }
        cout<<asol[temp-1];

        for(long j=temp-1;j<n;j++)
        {
            asol[j]=asol[j+1];
        }

        if(i!=k-1)
        {
            cout<<" ";
        }
        n--;
    }

    return 0;
}

