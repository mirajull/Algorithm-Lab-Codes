#include<bits/stdc++.h>
using namespace std;
int ara[100000];
int main()
{
    int n;
    cin>>n;
    int c=1;
    int max=0,k;
    for(int i=0;i<2*n;i++)
    {
        cin>>ara[i];
    }
    for(int i=1;i<2*n;i++)
    {
        if(c>max)
        {
            max=c;
        }
        k=0;
        for(int j=i-1;j>=0;j--)
        {
            if(ara[i]==ara[j])
            {
                c=c-1;
                k++;
            }
        }
        if(k==0)
        {
            c++;
        }


    }
    cout<<max<<endl;

    return 0;
}
