#include<bits/stdc++.h>
using namespace std;
#define ll long long

int check_multiple(int n)
{
    int cnt = 0;
    int h[n];
    memset(h,0,sizeof(h));
    for(int i=3; i<n; i+=3)
        h[i] = 1;
    for(int i=5; i<n; i+=5)
        h[i] = 1;
    for(int i=3; i<n; i++)
        if(h[i] == 1)
            cnt += i;
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<check_multiple(n)<<"\n";
    }
	return 0;
}
