#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,cnt=0,sum=0,Max=LONG_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i] > 0)
        {
            cnt++;
            sum = sum + a[i];
        }
        else if(a[i]<0 && a[i]>Max)
        {
            Max = a[i];
        }
    }
    if(cnt==0)
    {
        cout<<Max<<" "<<"1";
    }
    else
    cout<<sum<<" "<<cnt;

	return 0;
}
