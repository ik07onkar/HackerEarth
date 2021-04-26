#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    ll sum =0;
    cin>>a;

    for (int i=0;i<a.size();i++)
    {
        sum = sum + (a[i]-('a'-1));
    }
    cout<<sum<<endl;

	return 0;
}
