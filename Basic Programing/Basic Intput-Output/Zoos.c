#include<stdio.h>
#include<string.h>

int main()
{
    char zoo[100];
    int count_z=0,len,i;
    scanf("%s",zoo);
    len = strlen(zoo);

    for (i=0;i<len;i++)
    {
        if (zoo[i]=='z')
        {
            count_z++;
        }
    }

    if ((2*count_z) == (len-count_z))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
