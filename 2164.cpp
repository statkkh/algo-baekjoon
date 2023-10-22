#include <bits/stdc++>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Calculate the minimum number of cuts
    int minimumCuts = (n - 1) + (n * (m - 1));

    cout << minimumCuts << endl;

    return 0;
}