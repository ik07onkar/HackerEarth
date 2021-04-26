#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int n ;
    cin >> n;
    for(int i = 0; i < (3*n) + 2; i++)
    {
        for( int j = 0; j < 5; j++)
        {
            if(j == 0 || j == 4 || i % 3 == 2 )
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
