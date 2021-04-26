#include<bits/stdc++.h>
using namespace std;
#define ll long long

int rain_water(int a[], int n)
{
    int water = 0;
    int left[n];
    left[0] = a[0];
    for(int i=1; i<n; i++)
        left[i] = max(a[i], left[i-1]);
    int right[n];
    right[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--)
        right[i] = max(a[i],right[i+1]);
    for(int i=0; i<n; i++)
        water += min(right[i],left[i])-a[i];
    return water;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<rain_water(a,n);
    return 0;
}
