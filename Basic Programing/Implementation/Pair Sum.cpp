#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k,flag = 0;
    cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    ll i = 0, j = n-1;
    while(i < j)
    {
        if(a[i] + a[j] == k)
        {
            flag = 1;
            break;
        }
        else if(a[i] + a[j] > k)
            j--;
        else
            i++;
    }
    (flag == 1)?cout<<"YES":cout<<"NO";
    return 0;
}

