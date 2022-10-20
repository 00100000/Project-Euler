#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <bits/stdc++.h>
#endif

typedef long long ll;

ll n = 1e6;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll maxCycle = 0;
	ll maxIndex = 0;
	for (ll i = 1; i <= n; i++) {
		ll x = i;
		ll cycle = 0;
		while (x != 1) {
			cycle++;
			if (x % 2 == 0) x /= 2;
			else x = 3 * x + 1;
		}
		if (cycle > maxCycle) {
			maxCycle = cycle;
			maxIndex = i;
		}
	}

	cout << maxIndex;
	return 0;
}
