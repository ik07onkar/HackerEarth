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
    vector<int> NSR;
    vector<int> NSL;
    stack<int> s;
    for(int i=n-1; i>=0; i--)
    {
        if(s.size() == 0)
            NSR.push_back(n);
        else if(s.size() > 0 && a[s.top()] < a[i])
            NSR.push_back(s.top());
        else
        {
            while(s.size() != 0 && a[s.top()] >= a[i])
                s.pop();
            if(s.size() == 0)
                NSR.push_back(n);
            else
                NSR.push_back(s.top());
        }
        s.push(i);
    }
    reverse(NSR.begin(), NSR.end());
    while(!s.empty())
        s.pop();
    for(int i=0; i<n; i++)
    {
        if(s.size() == 0)
            NSL.push_back(-1);
        else if(s.size() > 0 && a[s.top()] < a[i])
            NSL.push_back(s.top());
        else
        {
            while(s.size() != 0 && a[s.top()] >= a[i])
                s.pop();
            if(s.size() == 0)
                NSL.push_back(-1);
            else
                NSL.push_back(s.top());
        }
        s.push(i);
    }
    vector<int> width;
    for(int i=0; i<n; i++)
        width.push_back((NSR[i] - NSL[i]) - 1);
    int max1 = INT_MIN;
    for(int i=0; i<n; i++)
        max1 = max(max1,width[i]*a[i]);
    cout<<max1;
    return 0;
}

