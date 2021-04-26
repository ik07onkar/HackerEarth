#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag = 1;
        string s1,s2;
        cin>>s1>>s2;
        int a1[26]={0},a2[26]={0};
        for (int i=0;i<max(s1.size(),s2.size());i++)
        {
            a1[s1[i]-'a']++;
            a2[s2[i]-'a']++;
        }
        for (int i=0;i<26;i++)
        {
            if (a1[i]!=a2[i])
            {
                flag = 0;
                break;
            }
        }
        (flag == 1)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}

