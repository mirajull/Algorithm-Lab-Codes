#include<iostream>
using namespace std;

class Teen
{

public:
    Teen()
    {
        distance=-1;
        level=-1;
        visited=false;
    }
    string name;
    int distance;
    int level;
    bool visited;
};

int main()
{

    int G;
    cin>>G;
    while(G>0)
    {
        Teen ara[5];
        int T,n,m,id1,id2;
        string str,s;
        G--;

        cin>>T;
        for(int k=0;k<T;k++)
        {
            cin>>str>>n;
            if(str=="Kishor")
                {
                    id1=0;
                }
            if(str=="Musa")
                {
                    id1=1;
                }
            if(str=="Robin")
                {
                    id1=2;
                }
            if(str=="Jina")
                {
                    id1=3;
                }
            if(str=="Raemon")
                {
                    id1=4;
                }
            if(k==0)
                {
                    ara[id1].distance=0;
                    ara[id1].name=str;
                    ara[id1].level=0;
                    ara[id1].visited=true;
                }
            for(int i=0,j=0;i<n;i++)
            {
                cin>>s>>m;
                j=j+m;
                //cout<<j<<endl;
                if(s=="Kishor")
                {
                    id2=0;
                }
                if(s=="Musa")
                {
                    id2=1;
                }
                if(s=="Robin")
                {
                    id2=2;
                }
                if(s=="Jina")
                {
                    id2=3;
                }
                if(s=="Raemon")
                {
                    id2=4;
                }
                if(ara[id2].distance==-1 ||  ara[id2].distance>=ara[id1].distance+j)
                {
                    ara[id2].distance=ara[id1].distance+j;
                    ara[id2].name=s;
                    ara[id2].level=ara[id1].level+1;
                    ara[id2].visited=true;
                }
                else
                {
                    ara[id2].name=s;
                    ara[id2].level=ara[id1].level+1;
                    ara[id2].visited=true;
                }
            }
        }

        for(int i=0;i<5;i++)
        {
            cout<<ara[i].distance<<endl;
        }


        /*
        int Max=-1;
        int f=0;
        for(int i=0;i<5;i++)
        {
            if(ara[i].visited==false)
            {
                cout<<"News not shared over the whole group";
                f++;
                break;
            }
            if(Max<ara[i].distance)
            {
                Max=ara[i].distance;
            }
        }
        if(f==0)
        {
            cout<<Max;
        }
        */

    }
    return 0;
}
