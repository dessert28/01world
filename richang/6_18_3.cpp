#include <bits/stdc++.h>
using namespace std;
int main() {
    double M, currentHeight;
    int N;
    cin >> M >> N;
    currentHeight = M;
    double totalDistance = M;
    for (int i = 1; i <= N; ++i) {
        currentHeight /= 2;
        totalDistance += 2 * currentHeight;
    }
    double finalHeight = currentHeight;
    cout << fixed << setprecision(2) << finalHeight <<endl<< totalDistance - currentHeight << endl;
    return 0;
}
