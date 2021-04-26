#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    while(q--)
    {
        int sum = 0;
        int x,y,z;
        cin>>x>>y>>z;
        switch(x)
        {
            case 1:
                a[y] = z;
                break;
            case 2:
                for(int i=y; i<=z; i++)
                    sum += a[i];
                cout<<sum<<endl;
        }

    }
    return 0;
}

