#include<stdio.h>
#define ll long long

int main()
{
   ll n,x,i;
   scanf("%lld",&n);
   scanf("%lld",&x);
   ll a[n];

   for (i=0;i<n;i++)
   {
      scanf("%lld",&a[i]);
      if (a[i]>=x)
      {
          printf("YES\n");
      }
      else
      {
          printf("NO\n");
      }
   }

   return 0;
}

