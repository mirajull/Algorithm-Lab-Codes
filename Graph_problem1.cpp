#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int j=1;
int unreachable(vector<int>nodes[],int str,int t)
{

    queue<int> que;
    bool visited[100000];
    int level[100000];

    for(int i=0;i<100000;i++)
    {
        visited[i]=false;
        level[i]=-1;
    }
    int count=0;
    int start=str;
    int f=0,g=0;
    que.push(start);
    visited[start]=true;
    level[start]=0;


    while(!que.empty())
    {
        int front = que.front();
        que.pop();
        vector<int>::iterator it;
        for(it=nodes[front].begin();it!=nodes[front].end();++it)
        {
            if(visited[*it]==false)
            {
                visited[*it]=true;
                level[*it]=level[front]+1;
                que.push(*it);
                if(level[*it]>t)
                {
                    count++;
                }
            }
        }
    }
    return count;

}



int main()
{

    int edges,a,b,x;



while(1)
{

    vector<int>nodes[100000];
    cin>>edges;
    if(edges==0) break;
    for(int i=0;i<edges;i++)
    {
        cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    int starting,TTL;

    while(1)
    {
        cin>>starting>>TTL;
        if(starting==0&&TTL==0)
        {
            break;
        }
        cout<<"Case "<<j++<<": "<<unreachable(nodes,starting,TTL)<<" nodes not reachable from node "<<starting<<" with TTL = "<<TTL<<"."<<endl;
    }

}

	return 0;
}


