#include <bits/stdc++.h>
using namespace std;
int main()
{
    float yuan, zfx, chazhi, l;
    cin >> l;
    yuan = 0.5 * 0.5 * l * l * 3.14;
    zfx = l * l;
    chazhi = zfx - yuan;
    cout << fixed << setprecision(2) << chazhi << endl;
    return 0;
}