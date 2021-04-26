#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, min1 = INT_MAX;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        if(i+1+a[i] > n)
        {
            cout<<i+1;
            break;
        }
    }
	return 0;
}
