#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, cnt = 0;
    cin>>n;
    while(n--)
    {
        double h,w,r;
        cin>>w>>h;
        if(w > h)
        {
            r = w/h;
            if(r <= 1.7 && r >= 1.6)
                cnt++;
        }
        else
        {
            r = h/w;
            if(r <= 1.7 && r >= 1.6)
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
