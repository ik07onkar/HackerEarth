#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    vector<int> v;
    stack<int> s;
    for(int i=0; i<n; i++)
    {
        if(s.size() == 0)
            v.push_back(1);
        else if(s.size() > 0 && a[s.top()] > a[i])
            v.push_back(i-s.top());
        else
        {
            while(s.size() != 0 && a[s.top()] <= a[i])
                s.pop();
            if(s.size() == 0)
                v.push_back(i+1);
            else
                v.push_back(i-s.top());
        }
        s.push(i);
    }
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
