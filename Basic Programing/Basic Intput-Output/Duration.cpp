#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int SH,SM,EH,EM,hr,minute;
        cin>>SH>>SM>>EH>>EM;
        if(SM > EM)
        {
            hr = EH -(SH + 1);
            minute = (60 - SM) + EM;
        }
        else if(SM < EM)
        {
            hr = EH - SH ;
            minute = EM - SM;
        }
        else
        {
            hr = EH - SH;
            minute = 0;
        }
        cout<<hr<<" "<<minute<<"\n";
    }

	return 0;
}
