#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll hints;
        cin>>hints;
        ll max1 = LONG_LONG_MIN, min1 = LONG_LONG_MAX, ans, l=0, r=0;
        while(hints--)
        {
            char dir;
            ll num;
            cin>>dir>>num;
            if(dir == 'L')
			{
				l = 1;
				min1 = min(min1,num);
			}
            else
			{
				r = 1;
				max1 = max(max1,num);
			}
        }
		if(hints == 1 || l == 0 || r == 0)
			cout<<"-1\n";
		else
		{
			ans = min1 - max1;
        	(ans <= 1)?cout<<"-1\n":cout<<ans-1<<"\n";
		}
    }
}
