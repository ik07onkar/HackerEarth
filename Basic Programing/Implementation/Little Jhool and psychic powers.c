#include<stdio.h>
#include<string.h>

int main()
{
    int count1=0,count0=0;
    char a[100];
    gets(a);

    for (int i=0;i<strlen(a);i++)
    {
        if(a[i]=='1')
            count1++;
        else
            count1=0;
        if(a[i]=='0')
            count0++;
        else
            count0=0;
        if(count1==6||count0==6)
        {
            printf("Sorry, sorry!");
            return 0;
        }
    }
    printf("Good luck!");
    return 0;
}
