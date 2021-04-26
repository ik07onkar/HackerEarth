#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0,o = 0,dot = 0,flag = 0;
    char a[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == '.') dot++;
            if(a[i][j] == 'X') x++;
            if(a[i][j] == 'O') o++;
        }
    }
    if(x == 0 && o == 1)
    {
        cout<<"Wait, what?";
        return 0;
    }
    flag = abs(x-o);
    if(flag != 1 && flag != 0)
    {
        cout<<"Wait, what?";
        return 0;
    }
    //winning X
    for(int i=0;i<3;i++)
    {
        if(a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X')
        {
            if(x-o != 1)
                cout<<"Wait, what?";
            else
                cout<<"X won.";
            return 0;
        }
        if(a[0][i] == 'X' && a[1][i] == 'X' && a[2][i] == 'X')
        {
            if(x-o != 1)
                cout<<"Wait, what?";
            else
                cout<<"X won.";
            return 0;
        }
    }
    if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
    {
        if(x-o != 1)
            cout<<"Wait, what?";
        else
            cout<<"X won.";
        return 0;
    }
    if(a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
    {
        if(x-o != 1)
            cout<<"Wait, what?";
        else
            cout<<"X won.";
        return 0;
    }
    //winning O
    for(int i=0;i<3;i++)
    {
        if(a[i][0] == 'O' && a[i][1] == 'O' && a[i][2] == 'O')
        {
            if(x-o != 0)
                cout<<"Wait, what?";
            else
                cout<<"O won.";
            return 0;
        }
        if(a[0][i] == 'O' && a[1][i] == 'O' && a[2][i] == 'O')
        {
            if(x-o != 0)
                cout<<"Wait, what?";
            else
                cout<<"O won.";
            return 0;
        }
    }
    if(a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
    {
        if(x-o != 0)
            cout<<"Wait, what?";
        else
            cout<<"O won.";
        return 0;
    }
    if(a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
    {
        if(x-o != 0)
            cout<<"Wait, what?";
        else
            cout<<"O won.";
        return 0;
    }
    //Draw.
    if(dot == 0)
    {
        cout<<"It's a draw.";
        return 0;
    }
    //Turn
    else
    {
        if(x>o)
            cout<<"O's turn.";
        else
            cout<<"X's turn.";
    }
    return 0;
}
