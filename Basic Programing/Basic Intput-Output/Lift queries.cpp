#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,A=0,B=7;
    cin>>t;
    while(t--)
    {
        ll num,abs_A,abs_B;
        cin>>num;
        abs_A = abs(num-A);
        abs_B = abs(num-B);
        if(abs_A == abs_B)
        {
            if(A < B)
            {
                cout<<"A"<<"\n";
                A = num;
            }
            else
            {
                cout<<"B"<<"\n";
                B = num;
            }
        }
        else if(abs_A < abs_B)
        {
            cout<<"A"<<"\n";
            A = num;
        }
        else
        {
            cout<<"B"<<"\n";
            B = num;
        }
    }
    return 0;
}
