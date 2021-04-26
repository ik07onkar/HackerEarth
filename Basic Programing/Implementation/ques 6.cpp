#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        for (int i=1;i<=x;i++)
        {
            for (int j=1;j<=x-i;j++)
            {
                cout<<" ";
            }
            for (int j=1;j<=i+(i-1);j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }

	return 0;
}
