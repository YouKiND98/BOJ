#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <queue>
#include <set>
#include <tuple>
#include <utility>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int a[10];
	int b[10];

	int A = 0, B = 0;
	for (int k = 0; k < 10; k++) {
		cin >> a[k];
	}
	for (int k = 0; k < 10; k++) {
		cin >> b[k];
	}
	for (int k = 0; k < 10; k++) {
		if (a[k] > b[k]) A++;
		else if (b[k] > a[k]) B++;
	}
	if (A > B) cout << "A";
	else if (A < B) cout << "B";
	else cout << "D";
}