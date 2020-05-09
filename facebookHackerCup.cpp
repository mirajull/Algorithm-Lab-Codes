#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265

int main()
{
    int p,x,y,t;
    double angle;
    int f=0;
    cin>>t;
    while(t>0)
    {

        t--;
        cin>>p>>x>>y;
        f++;
        angle=atan(y/x);
        angle=(angle*180)/PI;
        if(x>=50 && y>=50)
        {
            angle=90-angle;
        }
        else if(x>=50 && y<=50)
        {
            angle=angle+90;
        }
        else if(x<=50 && y<=50)
        {
            angle=270-angle;
        }
        else
        {
            angle=angle+270;
        }
        double pnew,dist;
        dist=sqrt((x-50)*(x-50)+(y-50)*(y-50));
        if(dist>50)
        {
            cout<<"Case #"<<f<<": "<<"white"<<endl;
            continue;
        }
        pnew=(dist*angle*100)/(360*dist);
        if(pnew<=p)
        {
            cout<<"Case #"<<f<<": "<<"black"<<endl;
        }
        else{
            cout<<"Case #"<<f<<": "<<"white"<<endl;
        }
        //cout<<t<<endl;
    }
    return 0;
}
