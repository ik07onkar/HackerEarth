#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll Max = LONG_MIN,Min = LONG_MAX,n;
    cin>>n;
    ll a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i] > Max)
            Max = a[i];
        if (a[i]<Min)
            Min = a[i];
    }
    ll add = Max + Min;
    cout<<add<<endl;

	return 0;
}
