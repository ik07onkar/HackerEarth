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
        int a[10] = {6, 2, 5, 5, 4 , 5, 6, 3, 7, 6};
        int sticks = 0, stick_1 = 2, stick_7 = 3, index;
        for(int i=0; i<s.size(); i++)
        {
            index = s[i] - 48;
            sticks += a[index];
        }
        while(sticks > 0)
        {
            if(sticks % 2 == 1)
            {
                cout<<"7";
                sticks -= stick_7;
            }
            else
            {
                cout<<"1";
                sticks -= stick_1;
            }
        }
        cout<<endl;
    }
    return 0;
}


