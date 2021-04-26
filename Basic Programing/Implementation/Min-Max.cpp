#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Max = INT_MIN,Min = INT_MAX;
    cin>>n;
    int a[n];
    int cnt=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i] > Max)
            Max = a[i] ;
        if(a[i] < Min)
            Min = a[i] ;
    }
    for (int j=(Min+1);j<Max;j++)
    {
        for (int i=0;i<n;i++)
        {
            if(a[i]==j)
            {
                cnt++;
                a[i]=0;
                break;
            }
        }
    }
    if(cnt==(Max-Min-1))
        cout<<"YES";
    else
        cout<<"NO";
}
