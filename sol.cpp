#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, m, k;
	cin >> n >> m >> k;
	int max_cost = max(n, m);
	int min_cost = min(n, m);
	int ans = max_cost - min(min_cost + k, max_cost);
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
