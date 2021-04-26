#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cost1,cost2,n,b1,b2,sum1=0,sum2=0,GT1,GT2;
        cin>>cost1>>cost2>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>b1>>b2;
            sum1 = sum1 + b1;
            sum2 = sum2 + b2;
        }
         GT1 = (cost1*sum1)+(cost2*sum2);
         GT2 = (cost1*sum2)+(cost2*sum1);
         if(GT1 < GT2)
            cout<<GT1<<"\n";
         else
            cout<<GT2<<"\n";

    }

	return 0;
}
