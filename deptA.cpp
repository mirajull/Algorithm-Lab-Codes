#include<bits/stdc++.h>
using namespace std;

bool ISprime(int n)
 {
  bool isPrime = true;
  for(int i = 2; i <=sqrt(n); ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  return isPrime;
}


int main()
{
    int n;
    cin>>n;
    int m,ans,i=1;
    if(n==1)
    {
        cout<<5<<endl;
        return 0;
    }
    if(n%2!=0)
    {
        m=1;
    }
    else{
        while(1)
        {
            i++;
            ans=n*i+1;
            if(!ISprime(ans))
            {
                m=i;
                break;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}
