#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    int min1 = 5000;
    bool hmm = false;
    int steps;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] < min1)
            min1 = a[i];
    }
    for(int i=0; i<n; i++)
        cin>>b[i];

    for(int i=0; i<n; i++)
    {
        while(a[i] > min1)
        {
            a[i] -= b[i];
            steps++;
            if(a[i] < 0)
            {
                hmm = true;
                break;
            }
        }
        if(hmm)
        break;
        if(a[i] < min1)
        min1 = a[i];
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i-1])
        hmm = true;
    }
    if(hmm)
        cout<<"-1";
    else
        cout<<steps;
	return 0;
}

