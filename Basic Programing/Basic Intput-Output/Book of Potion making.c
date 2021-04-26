#include<stdio.h>
#define ll long long

int main()
{
   ll x,i,ans=0,mode;
   scanf("%lld",&x);

   for (i=10;i>0;i--)
   {
       mode = x%10;
       ans = ans + (mode*i);
       x = x/10;
   }
   if (ans%11==0)
   {
       printf("Legal ISBN");
   }
   else
   {
       printf("Illegal ISBN");
   }

   return 0;
}


