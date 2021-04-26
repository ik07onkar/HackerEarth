#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll num=0,temp,n=0;
    cin>>num;
    vector<ll> a(num),cum(num);
    for (int i=0;i<num;++i)
        cin>>a[i];

    cum[0]=a[0];
    for(int i=1; i<num; i++)
        cum[i]=a[i]+cum[i-1];

    for(int i=0; i<num; i++)
    {
        n = (-1+sqrt(1+8*(num-i)))/2;
        n = (n*(n+1))/2;
        temp = 0;
        if(i)
            temp=cum[n-1+i]-cum[i-1];
        else
            temp=cum[n-1];
        a[i]=temp;
    }
    sort(a.begin(),a.end());
    cout<<a[num-1]<<endl;
	return 0;
}
