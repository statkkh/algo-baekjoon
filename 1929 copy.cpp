#include<bits/stdc++.h>
#include <vector>
using namespace std;


vector<bool> sosu(int n) {
	vector<bool> check(n + 1, true);
	check[0] = check[1] = 0;

	for (int i = 0; i < n + 1; i++) {
		if (check[i] == 0)
			continue;
		if ((i * i) > check.size())
			break;

		for (int j = i * i; j < check.size(); j += i) {
			check[j] = 0;
		}
	}

	return check;
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n;
	cin >> m >> n;
	
	vector<bool> check = sosu(n);

	for (int i = m; i <= n; i++) {
		if (check[i]) {
			cout << i << "\n";
		}
	}
}

// 