#include<bits/stdc++.h>
using namespace std;

char ara[100000];

int main()
{
    int t,f=0;
    cin>>t;
    while(t>0)
    {
        long n,m;
        f++;
        cin>>n>>m;
        long sum=0;
        for(long i=1;i<=n;i++)
        {
            if((i%(2*m)<=m)&&(i%(2*m))!=0){sum=sum-i;}
            else{sum=sum+i;}
        }
        cout<<"Case "<<f<<": "<<sum<<endl;
        t--;
    }
    return 0;
}
