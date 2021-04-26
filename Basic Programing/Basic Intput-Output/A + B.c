#include<stdio.h>
#define ll long long

int main()
{
   ll a,b,sum,p=12;

   while(p--)
   {
       scanf("%lld%lld",&a,&b);
       sum = a + b;
       printf("%lld\n",sum);
   }

   return 0;
}



