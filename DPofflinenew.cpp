#include<bits/stdc++.h>
using namespace std;

int conviv[6005];
int dp1[6005],dp2[6005];
vector<int>L[6005];
int parent_num[6005];
int Q[6005];
bool visited[6005];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>conviv[i];
    }
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        parent_num[i]=0;
    }
    int l,k;
    cin>>l>>k;

    while(l!=0 && k!=0){
        l--;
        k--;
        L[k].push_back(l);
        parent_num[l]++;
        cin>>l>>k;
    }

    int root=-1;

    for(int i=0;i<n;i++)
    {
        if(parent_num[i]==0)
        {
            root=i;
        }
    }

    int tail=0;
    Q[tail]=root;
    tail++;
    visited[root]=true;
    for(int i=0;i<n;i++)
    {
        int cur=Q[i];
        for(int j=L[cur].size()-1;j>=0;j--)
        {
            int next = L[cur][j];
            if(!visited[next])
            {
                Q[tail]=next;
                tail++;
                visited[next]=true;
            }
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        int cur=Q[i];
        dp1[cur]=conviv[cur];
        dp2[cur]=0;
        for(int j=L[cur].size()-1;j>=0;--j){
            int next = L[cur][j];
            dp1[cur]=dp1[cur]+dp2[next];
            dp2[cur]=dp2[cur]+max(dp1[next],dp2[next]);
        }
    }
    cout<<max(dp1[root],dp2[root])<<endl;
    return 0;
}
