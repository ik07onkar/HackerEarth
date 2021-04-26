#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,Max = LONG_LONG_MIN;
		cin>>n;
		ll a[n];
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
			Max = max(Max,a[i]);
		}
		ll h[Max+1]={0}, first_occ[Max+1]={0}, second_occ[Max+1]={0}, sum = 0;
		for(ll i=0; i<n; i++)
			h[a[i]]++;

        for(ll i=1; i<=Max; i++)
        {
            if(h[i] > 1)
            {
                for(int j=0; j<n; j++)
                {
                    if(i == a[j])
                    {
                        first_occ[i] = j+1;
                        break;
                    }
                }
            }
        }
        for(ll i=1; i<=Max; i++)
        {
            if(h[i] > 1)
            {
                for(int j=n-1; j>=1; j--)
                {
                    if(i == a[j])
                    {
                        second_occ[i] = j+1;
                        break;
                    }
                }
            }
        }
        for(ll i=0; i<=Max; i++)
            sum = sum + (second_occ[i] - first_occ[i]);
        cout<<sum<<"\n";
	}
	return 0;
}
