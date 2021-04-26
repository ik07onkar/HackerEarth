#include<stdio.h>
#define ll long long

int main()
{
   ll n,i,ans=0,last;
   scanf("%lld",&n);
   ll a[n];

   for (i=0;i<n;i++)
   {
       scanf("%lld",&a[i]);
       last = a[i]%10;
       ans = (ans*10)+last;
   }
   if(ans%10==0)
   {
       printf("Yes");
   }
   else
   {
       printf("No");
   }

   return 0;
}

