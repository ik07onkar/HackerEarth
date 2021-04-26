#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    ll l = s.size();
    ll flag,cnt=0;

    for(int i=0; i<l; i++)
    {
        flag=0;
        if(s[i]==')')
            continue;
        for(int j=i;j<i+l;j++)
        {
            (s[(j%l)] == '(') ? flag++ : flag--;
            if(flag<0)
                break;
        }
        if(flag==0)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
