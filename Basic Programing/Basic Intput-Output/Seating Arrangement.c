#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int seat;
    while(t--)
    {
        scanf("%d",&seat);
        if(seat%12==1)
        {
            printf("%d WS\n",seat+11);
        }
        else if(seat%12==2)
        {
            printf("%d MS\n",seat+9);
        }
        else if(seat%12==3)
        {
            printf("%d AS\n",seat+7);
        }
        else if(seat%12==4)
        {
            printf("%d AS\n",seat+5);
        }
        else if(seat%12==5)
        {
            printf("%d MS\n",seat+3);
        }
        else if(seat%12==6)
        {
            printf("%d WS\n",seat+1);
        }
        else if(seat%12==7)
        {
            printf("%d WS\n",seat-1);
        }
        else if(seat%12==8)
        {
            printf("%d MS\n",seat-3);
        }
        else if(seat%12==9)
        {
            printf("%d AS\n",seat-5);
        }
        else if(seat%12==10)
        {
            printf("%d AS\n",seat-7);
        }
        else if(seat%12==11)
        {
            printf("%d MS\n",seat-9);
        }
        else
        {
            printf("%d WS\n",seat-11);
        }
    }
    return 0;
}
