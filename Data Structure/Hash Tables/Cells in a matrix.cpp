#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    ll ans = n * 1ll * n;
    vector<bool> row(n + 1, false);
    vector<bool> col(n + 1, false);
    int r = n, c = n;
    while (k--) {
        int x, y;
        cin >> x >> y;
        if (!row[x] && !col[y]) {
            ans = ans - c - r + 1;
            r--;
            c--;
        } else if (!row[x] && col[y]) {
            ans = ans - c;
            r--;
        } else if (row[x] && !col[y]) {
            ans = ans - r;
            c--;
        }
        cout << ans << " ";
        row[x] = col[y] = true;
    }
    return 0;
}
