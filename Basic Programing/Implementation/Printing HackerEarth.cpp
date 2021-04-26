#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int h[26]={0},l=s.size(),Min=INT_MAX;
    if (l<11)
    {
        cout<<"0";
        return 0;
    }
    for(int i=0;i<l;i++)
    {
        h[s[i]-'a']++;
    }
    h[0]=h[0]/2;
    h[4]=h[4]/2;
    h[7]=h[7]/2;
    h[17]=h[17]/2;
    if(h[0]==0 || h[2]==0 || h[4]==0 || h[7]==0 || h[10]==0 || h[17]==0 || h[19]==0)
    {
        cout<<"0";
        return 0;
    }
    for(int i=0;i<26;i++)
    {
        if(h[i]<Min && h[i]!=0)
            Min = h[i];
    }
    cout<<Min<<"\n";

    return 0;
}
