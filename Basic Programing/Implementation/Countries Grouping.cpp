#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, max1 = 0, cnt = 0, flag = 1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            max1 = max(max1,a[i]);
        }
        int h[max1+1]={0};
        for(int i=0 ;i<n; i++)
            h[a[i]]++;
        cnt += h[1];
        for(int i=2; i<=max1; i++)
        {
            if(h[i]%i == 0)
                cnt += h[i]/i;
            else
            {
                flag = 0;
                break;
            }
        }
        (flag == 0)?cout<<"Invalid Data\n":cout<<cnt<<"\n";
    }
	return 0;
}
