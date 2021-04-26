#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll max1 = LONG_MIN;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            max1 = max(a[i],max1);
        }
        ll h[max1+1];
        memset(h,0,sizeof(h));
        for(int i=0; i<n; i++)
            h[a[i]]++;
        vector<ll> v;
        stack<ll> s;
        for(int i=n-1; i>=0; i--)
        {
            if(s.size() == 0)
                v.push_back(-1);
            else if(s.size() > 0 && h[s.top()] > h[a[i]])
                v.push_back(s.top());
            else if(s.size() && h[s.top()] <= h[a[i]])
            {
                while(s.size() && h[s.top()] <= h[a[i]])
                    s.pop();
                if(s.size() == 0)
                    v.push_back(-1);
                else
                    v.push_back(s.top());
            }
            s.push(a[i]);
        }
        reverse(v.begin(), v.end());
        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

