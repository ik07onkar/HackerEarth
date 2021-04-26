#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll max1 = -1, max2 = -1;
        ll a[n], b[n];
        for(int i=0; i<n; i++)
		{
			cin>>a[i];
			max1 = max(max1,a[i]);
		}
        for(int i=0; i<n; i++)
		{
			cin>>b[i];
			max2 = max(max2,b[i]);
		}
        if(max1 == max2)
            cout<<"Tie\n";
        else if(max1 > max2)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";
    }
	return 0;
}
