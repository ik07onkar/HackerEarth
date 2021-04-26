#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,zeros,flag = 0,cnt;
        cin>>zeros;
        n = zeros * 4;
        n /= 5;
        n *= 5;
        do
        {
            int m = n;
            cnt=0;
            while(m >= 5)
            {
                m /= 5;
                cnt += m;
            }
            if(cnt == zeros)
            {
                flag = 1;
                break;
            }
            else if(cnt > zeros)
            {
                break;
            }
            n += 5;
        }while(cnt < zeros);

        if(flag == 1)
        {
            cout<<"5"<<endl;
            for(int i=n; i<n+5; i++)
            cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}

