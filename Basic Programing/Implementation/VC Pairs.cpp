#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if((s[i]!='a'&& s[i]!='e'&& s[i]!='i' && s[i]!='o'&& s[i]!='u') && (s[i+1]=='a'|| s[i+1]=='e'|| s[i+1]=='i'|| s[i+1]=='o'|| s[i+1]=='u'))
                cnt++;
        }
        cout<<cnt<<endl;
    }

	return 0;
}
