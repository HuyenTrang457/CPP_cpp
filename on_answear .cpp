[Sắp xếp - Tìm Kiếm]. Bài 47. Factory machine

#include<iostream>
#include<algorithm>
#include<vector>
// 3 7
// 3 2 5
// ----> output : 8
using namespace std;
using ll = long long;
bool check(vector<int> a, int n, int t, ll time) {
	ll dem = 0;
	for (int i = 0; i < n; i++) {
		dem += time / a[i];
		if (dem >= t) return true; // tránh bị tràn khi tính dem
	}
	return t <= dem;
}

int main() {
	int n, t; cin >> n >> t;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		a.push_back(tmp);
	}
	ll left = 0, right = 1ll * (*min_element(a.begin(),a.end())) * t;
	ll ans = -1;
	while (left <= right) {
		ll mid = (left + right) / 2;

		if (check(a, n, t, mid)) {
			ans = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << ans;
}
