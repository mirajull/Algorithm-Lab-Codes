#include<iostream>
using namespace std;

class A
{
public:
     double weight;
     double value;
     int index;
     double per_unit;
     void func()
     {
        per_unit=(value/weight);
     }
};
void sorting (A arr[], int length)
{
    int j;
    A temp;
    for(int i=0;i<length;i++)
    {
    j = i;
    while (j > 0 && arr[j].per_unit > arr[j-1].per_unit){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}
int main()
{
    int t,n,capacity[100],length[100];
    cin>>t;
    int ans[100];
    int picked[100];
    A arra[100][100];

    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arra[i][j].weight;
            arra[i][j].index=j+1;
        }
        for(int j=0;j<n;j++)
        {
            cin>>arra[i][j].value;

        }
        for(int j=0;j<n;j++)
        {
            arra[i][j].func();
        }
        cin>>capacity[i];
        length[i]=n;
    }
    for(int k=0;k<t;k++)
    {
        sorting(arra[k],length[k]);
    }
    for(int i=0;i<t;i++)
    {
        int m=0;
        int j=0;
        ans[i]=0;
        while(m<capacity[i])
        {
            m=m+arra[i][j].weight;
            if(m<capacity[i]){
                ans[i]=ans[i]+arra[i][j].value;
            }
            else{
                ans[i]=ans[i]+(arra[i][j].value * (m-capacity[i]))/ arra[i][j].weight;
                arra[i][j].weight=(m-capacity[i]);
            }
            j++;
        }
        picked[i]=j;
    }
    cout<<endl;

   /* for(int i=0;i<t;i++)
    {
        for(int j=0;j<length[i];j++)
        {
            cout<<arra[i][j].index<<" ";
        }
        cout<<endl;
    } */


   for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
        for(int j=0;j<picked[i];j++)
        {
            cout<<arra[i][j].index<<" ";
        }
        cout<<endl;
        for(int j=0;j<picked[i];j++)
        {
            cout<<arra[i][j].weight<<" ";
        }
        cout<<endl;

    }
    return 0;


}
