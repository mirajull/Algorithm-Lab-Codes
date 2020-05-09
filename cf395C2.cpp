#include<bits/stdc++.h>
using namespace std;


int color[100000];
int cnt1=0,cnt2=0;


bool match(int ara[],int j,int n)
{
    cnt1=0;
    cnt2=0;

/*    for(int i=1;i<=n;i++)
    {
        cout<<ara[i]<<" ";
    }

*/





    for(int i=2;i<=j-1;i++)
    {
        if(ara[i-1]!=ara[i])
        {
            cnt1++;
        }
    }
    for(int i=j+2;i<=n;i++)
    {
        if(ara[i-1]!=ara[i])
        {
            cnt2++;
            //if(j==2){cout<<"vulw"<<endl;}
        }
    }
    //if(j==2){cout<<cnt1<<" "<<cnt2<<endl;}
    if(cnt1+cnt2==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n,u,v;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>color[i];
    }

   // for(int i=1;i<=n;i++)
   // {
     //   cout<<color[i]<<endl;
   // }


    for(int i=1;i<=n;i++)
    {
        if(match(color,i,n))
        {
            cout<<"YES"<<endl;
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
