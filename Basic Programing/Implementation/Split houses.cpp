#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'H' && s[i+1] == 'H')
        {
            cout<<"NO";
            return 0;
        }
        if(s[i] == '.')
            s[i] = 'B';
    }
    cout<<"YES"<<"\n"<<s;
    return 0;
}
