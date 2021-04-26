#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, sum = 0;
        cin>>n;
        string a;
        cin>>a;
        ll h[26];
        memset(h,0,sizeof(h));
        for(ll i=0; i<n; i++)
            h[a[i]-'a']++;
        for(int i=0; i<26; i++)
        {
            if(h[i] > 1)
            {
                h[i]--;
                sum += (h[i]*(h[i] + 1))/2;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
