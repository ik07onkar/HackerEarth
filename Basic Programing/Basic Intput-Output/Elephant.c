#include<stdio.h>
#define ll long long

int main()
{
   ll adress;
   scanf("%lld",&adress);

   if (adress%5==0)
   {
       printf("%lld",adress/5);
   }
   else
   {
       printf("%lld",adress/5+1);
   }

   return 0;
}
