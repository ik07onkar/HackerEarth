#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<pair<ll,ll>> v;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            v.push_back(make_pair(a[i],i));
        }
        if(is_sorted(a.begin(),a.end()))
            swap(a[n-1],a[n-2]);
        else
        {
            sort(v.begin(), v.end());
            for(ll i=0; i<n; i++)
            {
                if(a[i] != v[i].first)
                {
                    ll tmp = i;
                    while(v[tmp].first == v[tmp+1].first)
                        tmp++;
                    swap(a[i], a[v[tmp].second]);
                    break;
                }
            }
        }
        for(ll i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}



