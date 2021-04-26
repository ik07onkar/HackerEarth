#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll square(ll n) { return n * n; }

ll sum(ll n)
{
    if (n == 0)
        return 0;
    if (n % 2 == 1)
    {
        return square((n + 1) / 2) + sum(n / 2);    // Odd n
    }
    else
    {
        return square(n / 2) + sum(n / 2);   // Even n
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        cout<<sum(n)%m<<"\n";
    }
    return 0;
}

