#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;
    while(n-3*i>0)
    {
        n=n-3*i ;
        i++;
    }
    (n-i>0)?cout<<"Motu":cout<<"Patlu";
    return 0;
}
