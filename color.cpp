#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main()
{

int edges,a,b,x;
vector<int>nodes[1000];
cin>>x>>edges;
for(int i=0;i<edges;i++)
{
    cin>>a>>b;
    nodes[a].push_back(b);
    nodes[b].push_back(a);
}

queue<int> que;
bool visited[1000];
int color[1000];
int level[1000];
for(int i=0;i<1000;i++)
{
    visited[i]=false;
    color[i]=-1;
    level[i]=-1;
}

int start=1;
int f=0,g=0;
que.push(start);
visited[start]=true;
color[start]=0;
level[start]=0;


while(!que.empty())
{
    int front = que.front();
    que.pop();
    f++;
    vector<int>::iterator it;
	for(it=nodes[front].begin();it!=nodes[front].end();++it)
    {
			if(visited[*it]==false)
			{
				visited[*it]=true;
				level[*it]=f;
				que.push(*it);
                if(color[front]==0)
                {
                    color[*it]=1;
                }
                if(color[front]==1)
                {
                    color[*it]=0;
                }
            }
            else
            {
                if(color[*it]==color[front])
                {
                    g++;
                }
            }
		}
    }
    if(g==0 && level[x]!=-1)
    {

        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	return 0;
}

