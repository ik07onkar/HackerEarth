#include<stdio.h>
#define ll long long
#define pi 22/7

int main()
{
   ll n,r,x,count=0;
   scanf("%lld",&n);

   while (n--)
   {
       scanf("%lld%lld",&r,&x);
       if(x*100 > 2*pi*r)
       {
           count++;
       }
   }
   printf("%lld",count);

   return 0;
}


