#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a;
    cin>>a;
    int len=a.size();
    int h[10]={0};
    for(int i=0;i<len;i++)
    {
        h[a[i]-48]++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<" "<<h[i]<<endl;
    }

	return 0;
}

