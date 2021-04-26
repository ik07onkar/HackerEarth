#include<bits/stdc++.h>
using namespace std;
#define ll long long

int elements_equal(string a)
{
    for(int i=1; i<a.size(); i++)
        if(a[0] != a[i])
            return 0;
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag;
        string a;
        cin>>a;
        flag  = elements_equal(a);
        if(flag == 1)
            cout<<"-1"<<endl;
        else
        {
            sort(a.begin(), a.end());
            cout<<a<<endl;
        }
    }
	return 0;
}
