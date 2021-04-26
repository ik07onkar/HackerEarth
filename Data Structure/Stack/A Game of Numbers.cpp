#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    vector<ll> v,v2;
    stack<ll> s;
    for(int i=n-1; i>=0; i--)
    {
        if(s.size() == 0)
            v.push_back(n);
        else if(s.size() > 0 && a[s.top()] > a[i])
            v.push_back(s.top());
        else
        {
            while(s.size() != 0 && a[s.top()] <= a[i])
                s.pop();
            if(s.size() == 0)
                v.push_back(n);
            else
                v.push_back(s.top());
        }
        s.push(i);
    }
    reverse(v.begin(), v.end());
    while(s.size() != 0)
        s.pop();
    for(int i=n-1; i>=0; i--)
    {
        if(s.size() == 0)
            v2.push_back(-1);
        else if(s.size() > 0 && s.top() < a[i])
            v2.push_back(s.top());
        else
        {
            while(s.size() > 0 && s.top() >= a[i])
                s.pop();
            if(s.size() == 0)
                v2.push_back(-1);
            else
                v2.push_back(s.top());
        }
        s.push(a[i]);
    }
    reverse(v2.begin(), v2.end());
    v2.push_back(-1);
    for(int i=0; i<v.size(); i++)
        cout<<v2[v[i]]<<" ";
    return 0;
}

