#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c = 0;
        for(int i=1; i<s.size(); i++)
            if(s[i] >= 65 && s[i] <= 90)
                c++;
        char tmp[s.size()+c];
        int j=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] >= 65 && s[i] <=90)
                tmp[j++] = s[i] + 32;
            else
                tmp[j++] = s[i];
            if(i>0 && (s[i+1] >= 65 && s[i+1] <= 90))
                tmp[j++] = '_';
        }
        for(int i=0; i<s.size()+c; i++)
            cout<<tmp[i];
        cout<<endl;
    }
	return 0;
}
