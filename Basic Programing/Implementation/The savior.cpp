#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cnt = 0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((a[i]+a[j])%2 == 0 && a[i] != a[j])
                    cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
	return 0;
}
