#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    getline(cin,a);
    int n = a.size(), cnt = 0;
    int h[26];
    memset(h,0,sizeof(h));
    for(int i=0; i<n; i++)
    {
        if(a[i] == ' ')
        {
            for(int j=0; j<26; j++)
            {
                if(h[j] >= 2)
                {
                    cnt++;
                    break;
                }
            }
            memset(h,0,sizeof(h));
        }
        h[a[i]-'A']++;
    }
    for(int j=0; j<26; j++)
    {
        if(h[j] >= 2)
        {
            cnt++;
            break;
        }
    }
    cout<<cnt;
	return 0;
}
