#include<stdio.h>
#include<string.h>

int main()
{
    int k,len;
    char a[18];
    scanf("%s%d",&a,&k);
    len = strlen(a);

    for (int i=0; i<len; i++)
    {
        if (a[i]!='9')
        {
            a[i]='9';
            k--;
        }
        if(k == 0)
            break;
    }
    printf("%s",a);
    return 0;
}

/*
        <Brutt code>
    int k,len;
    char a[18];
    scanf("%s",&a);
    scanf("%d",&k);
    len = strlen(a);
    if(len<k)
    k = len;

    for (int i=0;i<len;i++)
    {
        if(k==0)
        {
            printf("%s",a);
            return 0;
        }
        if (a[i]!='9')
        {
            a[i]='9';
            k--;
        }
    }
    printf("%s",a);
*/
