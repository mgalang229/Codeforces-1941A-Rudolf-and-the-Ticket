#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n, m, k;
	cin >> n >> m >> k;
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int c[m];
	for (int i = 0; i < m; i++) {
		cin >> c[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cnt += (b[i] + c[j] <= k);
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
