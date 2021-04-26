#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    int size=s.size(),i=0;
    if(s[size-1] == '6')
        cout<<-1;
    else
    {
        int n=size;
        while(n--)
        {
            if(s[i] == '6') size--;
            i++;
        }
    cout<<size;
    }
	return 0;
}
