#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          ll c,n;
          cin>>c>>n;
          ll res=c-(n*(n+1))/2;
          if(res<0)
          {
                cout<<c<<"\n";
                continue;
          }
          cout<<res%n<<"\n";
     }
     return 0;
}
