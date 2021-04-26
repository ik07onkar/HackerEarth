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
        ll a[n];
        vector<ll> v;
        for(ll i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {
            ll cnt = 1;
            if(i == 0)
                cout<<"1 ";
            else
            {
                if(a[i-1] > a[i])
                    cout<<"1 ";
                else
                {
                    for(int j=i-1; j>=0; j--)
                    {
                        if(a[j] > a[i])
                            break;
                        else
                            cnt++;
                    }
                    cout<<cnt<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}


