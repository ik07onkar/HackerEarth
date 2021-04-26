#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,k,n,money;
        cin>>a>>k>>n;
        money = a+((k*n)-k);
        cout<<money<<endl;
    }
    return 0;
}
