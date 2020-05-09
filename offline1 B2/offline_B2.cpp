#include<iostream>
using namespace std;

class A
{
public:
    int s_time;
    int e_time;
    int index;
    int interval;
    bool ishandled;
};
/*
void Heapify(A*ob,int i,int n)
{
	int m;
	int left=2*i;
	int right=2*i+1;
	if(left<=n && ob[left].e_time<ob[i].e_time){
		m=left;
	}
	else m=i;
	if(right<=n && ob[right].e_time<ob[m].e_time){
		m=right;
	}
	if(m!=i){
		A temp=ob[i];
		ob[i]=ob[m];
		ob[m]=temp;
		Heapify(ob,m, n);
	}
}

void Buildheap(A*ob,int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        Heapify(ob,i,n);
    }
}
void HeapSort(A*ob,int n)
{
    Buildheap(ob,n);
    for(int i=n;i>=1;i--)
    {
        swap(ob[i],ob[1]);
        Heapify(ob,1,n-1);
    }
}
*/


void sorting(A a[],int n)
{
    int i,j,k;

    A tmp;

    for(i=0; i<n; i++)
    {
        tmp = a[i];
        j=i-1;
        while((tmp.e_time < a[j].e_time) && j >=0)
        {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = tmp;
    }
}

int main()
{
    int t,n;
    char a,b;
    int length[10];
    int count[10];
    cin>>t;
    A ob[5][10];

    for(int i=0; i<t; i++)
    {
        cin>>n;
        length[i]=n;
        for(int j=0; j<n; j++)
        {
            cin>>ob[i][j].s_time>>a>>ob[i][j].e_time>>b;
            if(a=='P')
            {
                ob[i][j].s_time+=12;
            }
            if(b=='P')
            {
                ob[i][j].e_time+=12;
            }
            if(ob[i][j].s_time>12 && ob[i][j].e_time<12 )
            {
                ob[i][j].interval=(24-ob[i][j].s_time)+ob[i][j].e_time;
            }
            else
            {

                if(ob[i][j].s_time>=ob[i][j].e_time)
                {
                    ob[i][j].interval=ob[i][j].s_time-ob[i][j].e_time;
                }
                else{
                    ob[i][j].interval=ob[i][j].e_time-ob[i][j].s_time;
                }
            }

            ob[i][j].index=j+1;
            ob[i][j].ishandled=false;
        }

    }
    for(int i=0; i<t; i++)
    {
        sorting(ob[i],length[i]);
    }

    for(int i=0; i<t; i++)
    {
        ob[i][0].ishandled=true;
        count[i]=1;
        A temp=ob[i][0];
        for(int j=1; j<length[i]; j++)
        {
            if(temp.e_time<=ob[i][j].s_time)
            {
                if(ob[i][j].interval<(temp.s_time-ob[i][j].s_time))
                {
                    temp=ob[i][j];
                    ob[i][j].ishandled=true;
                    count[i]++;
                }
            }
        }
    }

/*
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<length[i];j++)
        {
            cout<<ob[i][j].s_time<<" "<<ob[i][j].e_time<<endl;
        }
    } */

    cout<<endl<<endl;

    for(int i=0; i<t; i++)
    {
        cout<<count[i]<<endl;
        for(int j=0; j<length[i]; j++)
        {
            if(ob[i][j].ishandled==true)
            {
                cout<<ob[i][j].index<<" ";
            }
        }
        cout<<endl;
        for(int j=0; j<length[i]; j++)
        {
            if(ob[i][j].ishandled==true)
            {
                cout<<ob[i][j].s_time %12<<" "<<ob[i][j].e_time %12<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}
