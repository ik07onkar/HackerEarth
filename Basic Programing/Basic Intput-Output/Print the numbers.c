#include<stdio.h>
#define ll long long

int main()
{
   ll x,i;
   scanf("%lld",&x);
   ll a[x];

   for (i=0;i<x;i++)
   {
       scanf("%lld",&a[i]);
       printf("%lld ",a[i]);
   }

   return 0;
}


