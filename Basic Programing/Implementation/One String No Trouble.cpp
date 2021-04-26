#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    string s;
    cin>>s;
    int n = s.size();
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    int c=1, max1=0;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
            c=1;
        else
            c++;
        max1 = max(max1,c);
    }
    cout<<max1;
    return 0;
}

