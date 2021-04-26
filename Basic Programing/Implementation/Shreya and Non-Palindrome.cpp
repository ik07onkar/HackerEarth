#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check_palindrome(string s, int n)
{
    int start = 0, last = n-1;
    while(start < last)
    {
        if(s[start] != s[last])
            return false;
        start++;
        last--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int fg = 0;
    char tmp = s[0];
    for(int i=1; i<n; i++)
    {
        if(tmp != s[i])
        {
            fg = 1;
            break;
        }
    }
    if(fg == 0)
    {
        cout<<"0";
        return 0;
    }
    else
    {
        int flag = check_palindrome(s,n);
        (flag==0)?cout<<n:cout<<n-1;
    }
	return 0;
}
