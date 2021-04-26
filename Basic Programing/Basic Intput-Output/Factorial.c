#include<stdio.h>
#define ll long long

int main()
{
    ll i,x,ans=1;
    scanf("%lld",&x);

    for (i=1; i<=x; i++)
    {
       ans = ans * i;
    }
    printf("%lld",ans);
    return 0;
}
