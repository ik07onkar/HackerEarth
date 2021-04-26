#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool ispalindrome(string input)
{
    int start = 0,last = input.size()-1;
    while(start <= last)
    {
        if(input[start] != input[last])
            return false;
        start++;
        last--;
    }
    return true;
}

int count(string s)
{
    string temp;
    int len = s.size();
    int cnt;
    for(int i = 0; i < len; i++)
    {
        for(int j = 1; j <= len - i; j++)
        {
            temp = s.substr(i,j);
            cout<<i<<" , "<<j<<" = "<<temp<<endl;
            if(ispalindrome(temp))
                cnt++;
        }
    }

    return cnt;
}
int main()
{
    string s;
    cin >> s;
    cout << count(s);
    return 0;
}
