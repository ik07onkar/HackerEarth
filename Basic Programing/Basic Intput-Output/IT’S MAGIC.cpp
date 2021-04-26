#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n,i,min=1000000000,re=-1;
  cin>>n;
  int ar[n];
  long long sum=0;
  for(i=0;i<n;i++)
  {
      cin>>ar[i];
      sum+=ar[i];
  }
  for(i=0;i<n;i++)
  {
      if((sum-ar[i])%7==0)
      {
          if(ar[i]<min)
          {
              min=ar[i];
              re=i;
          }
      }
  }
  cout<<re;
  return 0;
}
