#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n == 1)
            cout<<"1\n";
        else
        {
            int i=1;
            while(pow(2,i)<n)
                i++;
            --i;
            int x=(n-pow(2,i))*2;
            cout<<x<<endl;
        }
	}
	return 0;
}
