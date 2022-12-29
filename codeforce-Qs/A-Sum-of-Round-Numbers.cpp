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
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int k = 0;
        for (int i = 0; i < n.size(); i++)
            if (n[i] != '0')
                k++;
        cout << k << "\n";
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] != '0')
            {
                cout << n[i];
                printZero(n.size() - i - 1);
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}