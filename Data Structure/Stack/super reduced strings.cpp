#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    ll n = a.size();
    vector<char> v;
    stack<char> s;
    for(int i=0; i<n; i++)
    {
        if(s.size() == 0 || s.top() != a[i])
            s.push(a[i]);
        else if(s.top() == a[i])
            s.pop();
    }
    if(s.size() == 0)
    {
        cout<<"Empty String";
    }
    else
    {
        while(s.size() != 0)
        {
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
            cout<<v[i];
    }
    return 0;
}
