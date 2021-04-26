#include<stdio.h>
#define ll long long

int main()
{
   ll x,y,z;
   scanf("%lld%lld%lld",&x,&y,&z);

   if (x>y && x>z)
   {
       printf("%lld",x);
   }
   else if (y>x && y>z)
   {
       printf("%lld",y);
   }
   else
   {
       printf("%lld",z);
   }

   return 0;
}

