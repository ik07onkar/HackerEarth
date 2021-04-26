#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int count = 0;
    gets(a);
    gets(b);

    for (int i=0;i<strlen(a);i++)
    {
        for (int j=0;j<strlen(b);j++)
        {
            if (a[i]==b[j])
            {
                count++;
                b[j]='0';
                break;
            }
        }
    }
    int flag = (strlen(a)+strlen(b))-(2*count);
    printf("%d",flag);

    return 0;
}
