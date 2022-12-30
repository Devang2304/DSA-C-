#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printZero(int x)
{
    while (x--)
        cout << 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n < k)
        {
            cout << "NO\n";
            continue;
        }
        int ans = 0;
        int rem = n - (2 * (k - 1));
        if (rem % 2 == 0)
            ans = rem;
        rem = n - k + 1;
        if (rem % 2 != 0)
            ans = rem;
        if (ans <= 0)
        {
            cout << "NO\n";
            continue;
        }else
        {
            cout << "YES\n";
            if (ans % 2 == 0)
            {
                for (int i = 0; i < k - 1; i++)
                    cout << 2 << " ";
                cout << ans;
            }else
            {
                for (int i = 0; i < k - 1; i++)
                    cout << 1 << " ";
                cout << ans;
            }
        }
        cout << "\n";
    }
    return 0;
}