#include<bits/stdc++.h>
using namespace std;

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
        if(!s.size())
            v.push_back(-1);
        else if(s.size() > 1 && s.top() < a[i])
            v.push_back(s.top());
        else
        {
            while(s.size() && s.top() >= a[i])
                s.pop();
            if(!s.size())
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(a[i]);
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}

