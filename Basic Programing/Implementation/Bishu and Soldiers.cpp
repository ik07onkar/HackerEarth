#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,Q,key,temp,cnt,sum,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cin>>Q;
    while(Q--)
    {
        cin>>key;
            cnt=0;
            sum=0;
        for(int i=0;i<n;i++)
        {
            if(key >= a[i])
            {
                 cnt++;
                 sum = sum +a[i];
            }
            if(key == a[i])
            {
                cout<<cnt<<" "<<sum<<endl;
                break;
            }
        }
        if(cnt==n)
        {
            cout<<cnt<<" "<<sum<<endl;
        }
    }

	return 0;
}
