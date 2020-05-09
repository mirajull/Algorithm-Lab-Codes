#include<bits/stdc++.h>
using namespace std;

int ara1[50];
int ara2[50];


int dif1[50];
int dif2[50];

void shift(int ara[],int n)
{
    int temp=ara[n-1];
    for(int i=n-2;i>=0;i--)
    {
        ara[i+1]=ara[i];
    }
    ara[0]=temp;
}

bool match(int dif1[],int dif2[],int n)
{

    for(int i=0;i<n;i++)
    {
        if(dif1[i]!=dif2[i])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int n,L;
    cin>>n>>L;
    for(int i=0;i<n;i++)
    {
        cin>>ara1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ara2[i];
    }
    dif1[0]=(L-ara1[n-1]+ara1[0]);
    dif2[0]=(L-ara2[n-1]+ara2[0]);

    for(int i=1;i<n;i++)
    {
        dif1[i]=(ara1[i]-ara1[i-1]);
        dif2[i]=(ara2[i]-ara2[i-1]);
    }


/*/ CHECKING
    for(int i=0;i<n;i++)
    {
        cout<<dif1[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        cout<<dif2[i]<<" ";
    }
// CHECKING

*/
    for(int i=0;i<n;i++)
    {
        if(match(dif1,dif2,n))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        shift(dif2,n);
    }
    cout<<"NO"<<endl;

    return 0;
}
