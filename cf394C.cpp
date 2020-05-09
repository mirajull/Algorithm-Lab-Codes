#include<bits/stdc++.h>
using namespace std;

class Pos
{
public:
    int row;
    int col;
};


char ara[50][50];
Pos mindig[3];
Pos minlet[3];
Pos minsym[3];
int x=0,y=0,z=0;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        scanf("%s",&ara[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ara[i][j]=='*'||ara[i][j]=='&'||ara[i][j]=='#')
            {
                minsym[x].row=i;
                minsym[x].col=min(j,m-1-j);
                x++;
            }
            if(ara[i][j]>='0' && ara[i][j]<='9')
            {
                mindig[y].row=i;
                mindig[y].col=min(j,m-1-j);
                y++;
            }
            if(ara[i][j]>='a' && ara[i][j]<='z')
            {
                minlet[z].row=i;
                minlet[z].col=min(j,m-1-j);
                z++;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        cout<<mindig[i].row<<"  "<<mindig[i].col<<endl;
        cout<<minlet[i].row<<"  "<<minlet[i].col<<endl;
        cout<<minsym[i].row<<"  "<<minsym[i].col<<endl;

        cout<<endl;
    }




    int ans=0;


    if((minlet[0].row==mindig[0].row)&&(minlet[0].row==minsym[0].row))
    {
        if(minlet[0].col==min((minlet[0].col,mindig[0].col),minsym[0].col))
        {
               ans=ans+minlet[0].col;
               if(mindig[1].row==minsym[1].row)
                {
                    ans=ans+min(mindig[1].col,minsym[1].col);
                    if(mindig[1].col==min(mindig[1].col,minsym[1].col))
                    {
                        ans=ans+minsym[2].col;
                    }
                    else{
                        ans=ans+mindig[2].col;
                    }
                }
                else{
                    ans=ans+mindig[1].col+minsym[1].col;
                }
        }


        else if(mindig[0].col==min((minlet[0].col,mindig[0].col),minsym[0].col))
        {
               ans=ans+mindig[0].col;
               if(minlet[1].row==minsym[1].row)
                {
                    ans=ans+min(minlet[1].col,minsym[1].col);
                    if(minlet[1].col==min(minlet[1].col,minsym[1].col))
                    {
                        ans=ans+minsym[2].col;
                    }
                    else{
                        ans=ans+minlet[2].col;
                    }
                }
                else{
                    ans=ans+minlet[1].col+minsym[1].col;
                }
        }
        else{
            ans=ans+minsym[0].col;
               if(minlet[1].row==mindig[1].row)
                {
                    ans=ans+min(minlet[1].col,mindig[1].col);
                    if(minlet[1].col==min(minlet[1].col,mindig[1].col))
                    {
                        ans=ans+mindig[2].col;
                    }
                    else{
                        ans=ans+minlet[2].col;
                    }
                }
                else{
                    ans=ans+minlet[1].col+mindig[1].col;
                }
        }
    }
    else
    {
        if(mindig[0].row==minsym[0].row)
        {
                    ans=ans+minlet[0].col;
                    ans=ans+min(mindig[0].col,minsym[0].col);
                    if(mindig[0].col==min(mindig[0].col,minsym[0].col))
                    {
                        ans=ans+minsym[1].col;
                    }
                    else{
                        ans=ans+mindig[1].col;
                    }
        }


        else if(minlet[0].row==minsym[0].row)
        {
                   ans=ans+mindig[0].col;
                    ans=ans+min(minlet[0].col,minsym[0].col);
                    if(minlet[0].col==min(minlet[0].col,minsym[0].col))
                    {
                        ans=ans+minsym[1].col;
                    }
                    else{
                        ans=ans+minlet[1].col;
                    }
        }

        else if(minlet[0].row==mindig[0].row)
        {
                    ans=ans+min(minlet[0].col,mindig[0].col);
                    if(minlet[0].col==min(minlet[0].col,mindig[0].col))
                    {
                        ans=ans+mindig[1].col;
                    }
                    else{
                        ans=ans+minlet[1].col;
                    }
        }
        else{
            ans=ans+mindig[0].col+minlet[0].col+minsym[0].col;
        }
    }

    cout<<ans<<endl;

    return 0;
}
