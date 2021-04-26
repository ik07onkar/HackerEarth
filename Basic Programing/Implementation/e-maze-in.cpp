#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int x = 0, y = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'L')
            x--;
        else if(s[i] == 'R')
            x++;
        else if(s[i] == 'U')
            y++;
        else
            y--;
    }
    cout<<x<<" "<<y;
    return 0;
}



