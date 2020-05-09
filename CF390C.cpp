#include <bits/stdc++.h>
using namespace std;





int main(){
	long long n, m, k;
	cin>>n>>m>>k;
	long long a, b;
	a=max(n-k,k-1);
	b=min(n-k,k-1);
    long long temp=m-n;
    long long c = 0;
    for(long long i = 0; i <= b; i++){
        temp = temp - (2*i + 1);
        if(temp<0){
            break;
        }
        c++;
    }
    for(long long i = b+1; i <= a; i++){
        temp=temp-(i+1+b);
        if(temp<0){
            break;
        }
        c++;
    }

    cout<<c+1+((temp>0)? temp/n : 0);
	return 0;
}
