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
        vector<char> stk;
        ll top = -1;
        for(int i=0; i<s.size(); i++)
        {
            if(top == -1)
            {
                stk.push_back(s[i]);
                top++;
            }
            else
            {
                if(s[i] == ')' && stk[top] == '(' || s[i] == '}' && stk[top] == '{' || s[i] == ']' && stk[top] == '[')
                {
                    stk.pop_back();
                    top--;
                }
                else
                {
                    stk.push_back(s[i]);
                    top++;
                }
            }
        }
        (top == -1)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
