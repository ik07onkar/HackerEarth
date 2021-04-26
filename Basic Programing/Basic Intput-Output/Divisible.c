#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d",&x);
    int a[x],i,count1,ans=0,n1,n2,y;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<x/2;i++)
    {
        count1 = 0;
        y=a[i];
        while (a[i]>0)
        {
            a[i]=a[i]/10;
            count1++;
        }
        n1 = y/pow(10,count1-1);
        ans = (ans*10)+n1;
    }
    for(i=x/2;i<x;i++)
    {
        n2 = a[i]%10;
        ans = (ans*10)+n2;
    }
    if (ans%11==0)
    {
        printf("OUI");
    }
    else
    {
        printf("NON");
    }
    return 0;
}
