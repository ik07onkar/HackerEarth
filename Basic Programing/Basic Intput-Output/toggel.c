#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int len,i;

    scanf("%s",a);
    len = strlen(a);

    for (i=0;i<len;i++)
    {
        if (a[i]>=96 && a[i]<=122)
        {
            a[i] = a[i]-32;
        }
        else
        {
            a[i] = a[i] + 32;
        }
    }
    printf("%s",a);

    return 0;
}
