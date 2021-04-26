#include<stdio.h>
#define ll long long

ll main()
{
    ll n,q,l,r,i,sum1=0;
    scanf("%lld%lld",&n,&q);
    ll a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum1 = sum1 + a[i];
        b[i] = sum1;
    }

    while(q--)
    {
        ll sum2 = 0,mean = 0;
        scanf("%d%d",&l,&r);
        sum2 = b[r-1]-b[l-1]+a[l-1];
        mean = sum2/(r-l+1);
        printf("%d\n",mean);
    }

    return 0;
}

