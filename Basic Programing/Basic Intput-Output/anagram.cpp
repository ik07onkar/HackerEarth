#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    string a,b;
    int count = 0;
    cin>>a>>b;

    for (int i=0;i<a.size();i++)
    {
        for (int j=0;j<b.size();j++)
        {
            if (a[i]==b[j])
            {
                count++;
                b[j]='0';
                break;
            }
        }
    }
    int flag = (a.size()+b.size())-(2*count);
    cout<<flag;
	}

	return 0;
}
