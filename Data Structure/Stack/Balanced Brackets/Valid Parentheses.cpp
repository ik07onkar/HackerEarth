#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    int top = -1;
    vector<char> v;
    for(int i=0; i<s.size(); i++)
    {
        if(top == -1)
        {
            v.push_back(s[i]);
            top++;
        }
        else
        {
            if(s[i] == ')' && v[top] == '(' || s[i] == ']' && v[top] == '[' || s[i] == '}' && v[top] == '{')
            {
                v.pop_back();
                top--;
            }
            else
            {
                v.push_back(s[i]);
                top++;
            }
        }
    }
    if(top == -1)
        cout<<"true\n";
    else
        cout<<"fasle\n";
    return 0;
}
