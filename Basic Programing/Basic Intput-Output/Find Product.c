#include<stdio.h>
#define mod 1000000007

int main()
{
    int n,i;
    long long ans=1;

    scanf("%d",&n);
    int a[n];

    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ans = (ans*a[i])%mod;
    }
    printf("%d",ans);

    return 0;
}
