#include<stdio.h>
#define ll long long

int main()
{
    ll n,count_h=0,count_a=0,count_c=0,count_k=0,count_e=0,count_r=0,count_t=0;
    scanf("%lld",&n);
    char a[n];
    scanf("%s",a);
    if(n<11)
    {
        printf("0");
        return 0;
    }

    for(int i=0;i<n;i++)
    {
      if(a[i]=='h')
      {
          count_h++;
      }
      else if(a[i]=='a')
      {
          count_a++;
      }
      else if(a[i]=='c')
      {
          count_c++;
      }
      else if(a[i]=='k')
      {
          count_k++;
      }
      else if(a[i]=='e')
      {
          count_e++;
      }
      else if(a[i]=='r')
      {
          count_r++;
      }
      else if(a[i]=='t')
      {
          count_t++;
      }
    }



    int h,a1,c,k,e,r,t;
    h=count_h/2;
    a1=count_a/2;
    c=count_c;
    k=count_k;
    e=count_e/2;
    r=count_r/2;
    t=count_t;

    if(h<a1 && h<c &&h<k&&h<e&&h<r&&h<t)
    {
        printf("%d",h);
    }
    else if (a1<h&&a1<c&&a1<k&&a1<e&&a1<r&&a1<t)
    {
        printf("%d",a1);
    }
    else if (c<h&&c<a1&&c<k&&c<e&&c<r&&c<t)
    {
        printf("%d",c);
    }
    else if (k<h&&k<c&&k<a1&&k<e&&k<r&&k<t)
    {
        printf("%d",k);
    }
    else if (e<h&&e<c&&e<k&&e<a1&&e<r&&e<t)
    {
        printf("%d",e);
    }
    else if (r<h&&r<c&&r<k&&r<e&&r<a1&&r<t)
    {
        printf("%d",r);
    }
    else
    {
        printf("%d",t);
    }

    return 0;

}
