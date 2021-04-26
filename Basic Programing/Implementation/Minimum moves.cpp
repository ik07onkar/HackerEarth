#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,cnt = 0;
        cin>>x>>y;
        if(x < y || x < 0 || y < 0)
            cout<<"-1\n";
        else
            cout<<x<<"\n";
    }
	return 0;
}
