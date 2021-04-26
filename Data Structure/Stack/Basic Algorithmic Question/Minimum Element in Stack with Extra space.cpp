#include<bits/stdc++.h>
using namespace std;
#define ll long long

stack<int> s,aux;

void Push(int x)
{
    s.push(x);
    if(aux.size() == 0 || x <= aux.top())
        aux.push(x);
}

int min_ele()
{
    if(aux.size() == 0)
        return -1;
    else return aux.top();
}

int Pop()
{
    int ans;
    if(s.size() == 0)
        return -1;
    else
    {
        ans = s.top();
        if(ans == aux.top())
        {
            s.pop();
            aux.pop();
        }
        else
            s.pop();
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        Push(a[i]);
    }
    cout<<Pop()<<" ";
    cout<<min_ele()<<" ";
    return 0;
}

