#include<bits/stdc++.h>
using namespace std;
#define ll long long

int MAH(int a[], int n)
{
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
    return max1;
}

int main()
{
    int n, r, tmp, flag = 0, max1 = INT_MIN;
    cin>>r>>n;
    int a1[n];
    memset(a1,0,sizeof(a1));
    while(r--)
    {
        for(int i=0; i<n; i++)
        {
            if(flag == 0)
                cin>>a1[i];
            else
            {
                cin>>tmp;
                if(tmp == 1)
                    a1[i] += tmp;
                else
                    a1[i] = 0;
            }
        }
        flag = 1;
        max1 = max(max1,MAH(a1,n));
    }
    cout<<max1;
    return 0;
}
