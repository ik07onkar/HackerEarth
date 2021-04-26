#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i] < x || a[i] > y)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
	return 0;
}
