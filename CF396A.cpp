#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    if(a!=b)
    {
        cout<<max(a.length(),b.length())<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
