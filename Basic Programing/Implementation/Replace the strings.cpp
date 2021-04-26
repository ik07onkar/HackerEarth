#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        ll h1[26]={0}, h2[26]={0};
        for(int i=0; i<n; i++)
        {
            if(a[i] != '?')
                h1[a[i]-'a']++;
        }
        for(int i=0; i<n; i++)
        {
            if(b[i] != '?')
                h2[b[i]-'a']++;
        }
        for(int i=0; i<26; i++)
            cnt += abs(h1[i]-h2[i]);
        (cnt <= 2)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
