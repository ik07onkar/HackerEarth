#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int a1 = abs(x1-x2);
        int a2 = abs(y1-y2);
        if((a1 == 1 && a2 == 1) || (a1 == 1 && a2 == 0) || (a1 == 0 && a2 == 1))
            cout<<"FIRST\n";
        else if(a1 == 0 && a2 == 0)
            cout<<"SECOND\n";
        else
            cout<<"DRAW\n";
    }
	return 0;
}
