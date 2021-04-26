#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    stack<char> s;
    for(int i=0; i<a.size(); i++)
    {
        if(i > 0 && s.size() != 0 && (a[i] == ')' && s.top() == '('))
        {
            s.pop();
            continue;
        }
        s.push(a[i]);
    }
    cout<<s.size();
    return 0;
}

