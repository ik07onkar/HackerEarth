#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n , q, d , k , l , r;
    cin >> n >> q;
    ll a[n+1];
    map<ll , vector<ll>> mp;
    for(int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    while(q--) {
        cin >> d >> k >> l >> r;
        l = lower_bound(mp[d].begin() , mp[d].end() , l) - mp[d].begin();
        r = upper_bound(mp[d].begin() , mp[d].end() , r) - mp[d].begin() - 1;
        if(mp[d].size() == 0 || r-l+1 < k)
            cout<<"-1\n";
        else cout<<mp[d][l+k-1]<<"\n";
    }
    return 0;
}
