#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[12]={67,71,73,79,83,89,97,101,103,107,109,113};
        for(int i=0;i<n;i++)
        {
            int min=999;
            int ch=(int)s[i];
            for(int j=0;j<12;j++)
            {
                if(abs(ch-a[j])<min)
                {
                    min=abs(ch-a[j]);
                    s[i]=(char)a[j];
                }
            }
        }
        cout<<s<<endl;
    }
	return 0;
}
