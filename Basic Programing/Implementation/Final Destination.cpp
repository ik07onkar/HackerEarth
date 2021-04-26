#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x = 0, y = 0;
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'L')
            x--;
        else if(s[i] == 'R')
            x++;
        else if(s[i] == 'D')
            y--;
        else
            y++;
    }
    cout<<x<<" "<<y;
	return 0;
}
