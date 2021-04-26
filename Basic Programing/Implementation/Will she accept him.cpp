#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string he, she;
        cin>>he>>she;
        int len1 = he.size(), len2 = she.size(), flag = 1;
        int a[26]={0}, b[26]={0};
        for(int i=0; i<len1; i++)
            a[he[i]-'a']++;
        for(int i=0; i<len2; i++)
            b[she[i]-'a']++;

        for(int i=0; i<26; i++)
        {
            if(a[i] != 0)
            {
                if(b[i] < a[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        (flag == 0)?cout<<"We are only friends\n":cout<<"Love you too\n";
    }
}
