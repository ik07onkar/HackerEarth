#include<stdio.h>
#define ll long long

int main()
{
   ll length,pages;
   scanf("%lld%lld",&length,&pages);

   if(length<=23 && (pages>=500 && pages <= 1000))
   {
       printf("Take Medicine");
   }
   else
   {
       printf("Don't take Medicine");
   }

   return 0;
}

