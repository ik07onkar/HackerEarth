#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;

        for(ll i=0;i<n;i++)
        {
            if(str[i]=='a') continue;
            ll c = abs(str[i] - 'z') + 1;
            if(k-c>=0)
            {
                k -= c;
                str[i] = 'a';
                if(k==0) break;
            }
        }
        if(k>0)
        {
            ll c = abs(str[n-1] - 'z') + 1;
            if(k-c>=0)
            {
                k -= c;
                str[n-1] = 'a';
            }
        }
        if(k>0)
        {
            k %= 26;
            str[n-1] = int(str[n-1]) + k;
        }
        cout<<str<<"\n";
    }
    return 0;
}
