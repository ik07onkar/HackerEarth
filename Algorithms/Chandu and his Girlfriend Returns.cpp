#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int a1[], int a2[], int n1, int n2, int a3[])
{
    int n,i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a1[i] > a2[j])
            a3[k++]=a1[i++];
        else
            a3[k++]=a2[j++];
    }
    while(i < n1)
        a3[k++]=a1[i++];
    while(j < n1)
        a3[k++]=a2[j++];

    n=n1+n2;

    for(i=0;i<n;i++)
    {
        cout<<a3[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n1,n2,t;
    cin>>t;
    while(t--)
    {
          cin>>n1>>n2;
          int a1[n1],a2[n2],a3[n1+n2];
          for(int i=0; i<n1; i++)
            cin>>a1[i];
          for(int i=0; i<n2; i++)
            cin>>a2[i];
          mergeArrays(a1,a2,n1,n2,a3);
    }
    return 0;
}
