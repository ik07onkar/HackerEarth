#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll count1=0,n,flag=1;
        cin>>n;
        string a;
        cin>>a;
        for(int i=0;i<n;i++)
        {
            if ((a[i]>=48) && (a[i]<=57))
            {
                if (flag==1)
                {
                    flag=0;
                    count1++;
                }
            }
            else
                flag=1;

        }
        cout<<count1<<endl;
    }

	return 0;
}
