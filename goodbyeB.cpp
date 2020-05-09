#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int dis;
    string dir;
    string ans;
    int x=0;
    int y=0;
    for(int i=0;i<n;i++)
    {
        cin>>dis;
        cin>>dir;
        if(y>20000 || y<0)
        {
            ans="NO";
        }
        if(y==0&&dir!="South")
        {
            ans="NO";
        }
        if(y==20000&&dir!="North")
        {
            ans="NO";
        }
        if(dir=="North")
        {
            y=y-dis;
        }
        if(dir=="South")
        {
            y=y+dis;
        }

    }
    if(ans=="NO" || y!=0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
