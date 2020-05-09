#include<iostream>
using namespace std;

int T=1;

class Sort
{
public:
    int element;
    int index;
};

void shiftRight(Sort a[],int first,int last)
{
    for(int i=last;i>=first;i--)
    {
        a[i+1]=a[i];
    }
}

void Merge(Sort arr[],int first,int mid,int last)
{
    int left,right,k;
    left=first;
    right=mid+1;
    while(left<=mid&&right<=last)
    {
        if(arr[left].element<=arr[right].element)
        {
            left++;
        }
        else{
            int temp=arr[right].element;
            int ind=arr[right].index;
            shiftRight(arr,left,right-1);
            arr[left].element=temp;
            arr[left].index=ind;
            left++;
            right++;
        }
    }
}
void mergeSort(Sort arr[], int first, int last)
{
    if (first<last)
    {
        int mid=first+(last-first)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        Merge(arr,first,mid,last);
    }
}


int main()
{
    int n,t;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        Sort ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i].element;
            ara[i].index=i;
        }
        mergeSort(ara,0,n-1);

        //printing
        cout<<"Case "<<T<<"#"<<endl;
        for (int i=0;i<n;i++)
        {
            cout<<ara[i].element<<" ";
        }
        cout<<endl;
        for (int i=0;i<n;i++)
        {
            cout<<ara[i].index<<" ";
        }
        cout<<endl;
        T++;
        //printing


        t--;
    }

    return 0;
}
