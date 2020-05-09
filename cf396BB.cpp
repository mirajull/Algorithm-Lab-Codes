#include<bits/stdc++.h>
using namespace std;

long arr[100000];

int comp(const void* a, const void* b)
{  return *(int*)a > *(int*)b ; }

int findNumberOfTriangles(long arr[], int n)
{
    qsort(arr, n, sizeof( arr[0] ), comp);
    int count = 0;

    for (int i = 0; i < n-2; ++i)
    {
        int k = i+2;
        for (int j = i+1; j < n; ++j)
        {
            while (k < n && arr[i] + arr[j] > arr[k])
               ++k;

            count += k - j - 1;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(findNumberOfTriangles(arr, n )==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
