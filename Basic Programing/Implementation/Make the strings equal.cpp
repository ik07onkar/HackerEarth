#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int h1[26]={0},h2[26]={0};
        for(int i=0; i<n; i++)
            h1[s[i]-'a']++;
        for(int i=0; i<n; i++)
            h2[t[i]-'a']++;
        int len = s.size();
        if(s == t)
            cout<<"YES\n";
        else
        {
            int flag = 0,fg = 0;
            for(int i=0; i<26; i++)
            {
                if(h1[i] != h2[i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                cout<<"NO\n";
            else
            {
                for(int i=0; i<n-1; i++)
                {
                    if(s[i] == t[i+1] && t[i] == s[i+1])
                    {
                        fg = 1;
                        break;
                    }
                }
                if(fg == 1)
                    cout<<"NO\n";
                else
                    cout<<"YES\n";
            }
        }
    }
    return 0;
}
