#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,len,ans=0;
    scanf("%s",a);
    len = strlen(a);

    for (i=0;i<len;i++)
    {
        ans = ans + (a[i]-'a'+1);
    }
    printf("%d",ans);
    return 0;
}
