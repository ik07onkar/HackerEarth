#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if (a>b)
            cout<<a/b<<endl;
        else
            cout<<b/a<<endl;
    }

	return 0;
}
