#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin>>s;
    if(s[2]=='A'||s[2]=='E'||s[2]=='I'||s[2]=='O'||s[2]=='U'||s[2]=='Y')
        cout<<"invalid";
    else
    {
        int a[4];
        a[0]=int(s[0])+int(s[1]);
        a[1]=int(s[3])+int(s[4]);
        a[2]=int(s[4])+int(s[5]);
        a[3]=int(s[7])+int(s[8]);
        for(int i=0;i<4;i++)
        {
            if((a[i]-1)%2==0)
            {
                cout<<"invalid";
                return 0;
            }
        }
        cout<<"valid";
    }
	return 0;
}
