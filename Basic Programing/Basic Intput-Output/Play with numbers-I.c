#include<stdio.h>
#define ll long long

ll main()
{
    ll n,q,l,r,i,j,ans,mean;
    scanf("%lld%lld",&n,&q);
    ll a[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    while(q--)
    {
        ans = 0;
        scanf("%lld%lld",&l,&r);
        for(j=l-1;j<=r-1;j++)
        {
            ans = ans + a[j];
        }
        mean = ans/(r-l+1);
        printf("%lld\n",mean);
    }

    return 0;
}
