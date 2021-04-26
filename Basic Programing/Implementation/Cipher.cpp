#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    char tmp;
    int k, n = s.size(), mod, k1;
    cin>>k;
    for(int i=0; i<n; i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            k1 = k % 26;
            mod  = (s[i]%(122-(k1-1)));
            if(mod >= 97)
                s[i] = s[i]+k1;
            else
                s[i] = 'a' + mod;
        }
        else if(s[i] >= 65 && s[i] <= 90)
        {
            k1 = k % 26;
            mod  = (s[i]%(90-(k1-1)));
            if(mod >= 65)
                s[i] = s[i]+k1;
            else
                s[i] = 'A' + mod;
        }
        else if(s[i] >= 48 && s[i] <= 57)
        {
            k1 = k % 10;
            mod  = (s[i]%(57-(k1-1)));
            if(mod >= 48)
                s[i] = s[i]+k1;
            else
                s[i] = '0' + mod;
        }
    }
    cout<<s;
	return 0;
}
