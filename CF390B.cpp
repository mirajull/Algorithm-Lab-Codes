#include<bits/stdc++.h>
using namespace std;
char ara[4][5];
string temp[4];
int main()
{
    for(int i=0;i<=3;i++)
    {
        gets(ara[i]);
        ara[i][4]='\0';
    }

    //1st one
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(ara[i][j]=='x')
            {
                if(ara[i][j+1]=='x')
                {
                    if(ara[i][j+2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i][j+1]=='.')
                {
                    if(ara[i][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
             /*   //ekhane theke column
                else if(ara[i+1][j]=='x')
                {
                    if(ara[i+2][j]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i+1][j]=='.')
                {
                    if(ara[i+2][j]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                //ekhane theke diagonal
                else if(ara[i+1][j+1]=='x')
                {
                    if(ara[i+2][j+2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i+1][j+1]=='.')
                {
                    if(ara[i+2][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }

                // bam korno
                else if(ara[i-1][j-1]=='x')
                {
                    if(ara[i-2][j-2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i-1][j-1]=='.')
                {
                    if(ara[i-2][j-2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                */

            }
            else if(ara[i][j]=='.')
            {
                if(ara[i][j+1]=='x')
                {
                    if(ara[i][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
             /*   //ekhane column
                else if(ara[i+1][j]=='x')
                {
                    if(ara[i+2][j]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                //ekhan theke korno
                else if(ara[i+1][j+1]=='x')
                {
                    if(ara[i+2][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                //bam korno
                else if(ara[i-1][j-1]=='x')
                {
                    if(ara[i-2][j-2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                */


            }
        }
    }

//2nd one
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<4;i++)
        {
           if(ara[i][j]=='x')
            {
              /*  if(ara[i][j+1]=='x')
                {
                    if(ara[i][j+2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i][j+1]=='.')
                {
                    if(ara[i][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }

             */
                //ekhane theke column
                if(ara[i+1][j]=='x')
                {
                    if(ara[i+2][j]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i+1][j]=='.')
                {
                    if(ara[i+2][j]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
              /*  //ekhane theke diagonal
                else if(ara[i+1][j+1]=='x')
                {
                    if(ara[i+2][j+2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i+1][j+1]=='.')
                {
                    if(ara[i+2][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }

                // bam korno
                else if(ara[i-1][j-1]=='x')
                {
                    if(ara[i-2][j-2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i-1][j-1]=='.')
                {
                    if(ara[i-2][j-2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                */

            }
            else if(ara[i][j]=='.')
            {
             /*   if(ara[i][j+1]=='x')
                {
                    if(ara[i][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }

            */ //ekhane column
                if(ara[i+1][j]=='x')
                {
                    if(ara[i+2][j]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            /*    //ekhan theke korno
                else if(ara[i+1][j+1]=='x')
                {
                    if(ara[i+2][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                //bam korno
                else if(ara[i-1][j-1]=='x')
                {
                    if(ara[i-2][j-2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                */


            }
        }
    }

// 3rd one

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(ara[i][j]=='x')
            {
             /*   if(ara[i][j+1]=='x')
                {
                    if(ara[i][j+2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i][j+1]=='.')
                {
                    if(ara[i][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                //ekhane theke column
                else if(ara[i+1][j]=='x')
                {
                    if(ara[i+2][j]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i+1][j]=='.')
                {
                    if(ara[i+2][j]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
             */   //ekhane theke diagonal
                if(ara[i+1][j+1]=='x')
                {
                    if(ara[i+2][j+2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i+1][j+1]=='.')
                {
                    if(ara[i+2][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }

                // bam korno
                else if(ara[i-1][j-1]=='x')
                {
                    if(ara[i-2][j-2]=='.')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else if(ara[i-1][j-1]=='.')
                {
                    if(ara[i-2][j-2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }

            }
            else if(ara[i][j]=='.')
            {
               /* if(ara[i][j+1]=='x')
                {
                    if(ara[i][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                //ekhane column
                else if(ara[i+1][j]=='x')
                {
                    if(ara[i+2][j]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
              */  //ekhan theke korno
                if(ara[i+1][j+1]=='x')
                {
                    if(ara[i+2][j+2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                //bam korno
                else if(ara[i-1][j-1]=='x')
                {
                    if(ara[i-2][j-2]=='x')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }


            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

