#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,A,B,C;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C;
        if(B-A==C-B)
            cout<<"0\n";
        else
        {
            if((((B-A)%2==0)&&((C-B)%2==0))||(((B-A)%2==1)&&((C-B)%2==1)))
                cout<<((abs(2*B-A-C))/2)<<"\n";
            else
                cout<<(((abs(2*B-A-C)-1)/2)+1)<<"\n";
        }
    }
    return 0;
}
