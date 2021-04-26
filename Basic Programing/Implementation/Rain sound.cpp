#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,s,mod,ans1,ans2;
        cin>>l>>r>>s;

        mod = l%s;
        ans1 = (mod==0) ? l/s : (l+(s-mod))/s ;

        mod = r%s;
        ans2 = (mod==0) ? r/s : (r-mod)/s ;

        if (s*ans2 < l && s*ans1 > r)
            cout<<"-1 -1\n";
        else
            cout<<ans1<<" "<<ans2<<endl;
    }

    return 0;
}

