#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int x, y;
	cin >> x >> y;
	cout << abs(x - y) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
