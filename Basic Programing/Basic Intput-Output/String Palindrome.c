/*
Que:-You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[110];
    int i,len,flag=1;
    scanf("%s",a);
    len = strlen(a);

    for (i=0; i<len/2; i++)
    {
        if (a[i] != a[len-1-i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("YES");
    else
        printf("No");

    return 0;
}
