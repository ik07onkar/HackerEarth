#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,c=0,a1=0,a2=0,a3=0;
    cin>>n;
    while(c<n)
    {
        int x;
        cin>>x;
        a1=a1+x;
        c++;
        if(c>=n)
            break;
        int y;
        cin>>y;
        a2=a2+y;
        c++;
        if(c>=n)
            break;
        int z;
        cin>>z;
        a3=a3+z;
        c++;
    }
    cout<<a1<<" "<<a2<<" "<<a3;
    return 0;
}
