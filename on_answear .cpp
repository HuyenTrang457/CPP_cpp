Chú ý bài đầu


[Sắp xếp - Tìm Kiếm]. Bài 49. Trò chơi cắt dây
Có n sợi dây, bạn cần cắt k đoạn dây có cùng chiều dài từ chúng. Tìm chiều dài tối đa của các mảnh dây bạn có thể nhận được.

#include <iostream>
#include<vector>
using namespace std;
//4 11
//802 743 457 539
using ll = long long;
bool check(vector<int> a, int n, int k, double len) {
	ll dem = 0;
	for (int i = 0; i < n; i++) {
		dem += (int)a[i] / len;
	}
	return dem >= k;
}
int main() {
	// n: số sợi dây ,, k: số đoạn dây có cùng chiều dài
	int n, k; cin >> n >> k;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		a.push_back(tmp);
	}

	double left = 0, right = 9e18;
	double ans = -1;
	for (int i = 0; i < 80; i++) {
		double mid = (left + right) / 2;
		if (check(a, n, k, mid)) {
			ans = mid;
			left = mid;
		}
		else right = mid;
	}

	cout  << ans; //fixed << setprecision(6)

}


-------------------------------------------------------------------------------------

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

-------------------------------------------------------------------------------------
CHẶT CÂY XÂY NHÀ

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long;

bool check(vector<int> a, int n, int l, int h) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i]> h) {
			sum += (a[i] - h);
		}
		if (l <= sum) return true;
	}
	return l <= sum;
}
int main() {

	int n, l; cin >> n >> l;
	int ans=0;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		a.push_back(tmp);
	}
	int left = 0, right = 1ll * (*max_element(a.begin(), a.end()));
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(a, n, l, mid)) {
			ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans;
}




--------------------------------------------------------------------------------------------
[Sắp xếp - Tìm Kiếm]. Bài 46. Chia mảng thành k mảng con liên tiếp có tổng lớn nhỏ nhất

//5 3
//2 4 7 3 5
// ---> output: 8

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long;

bool check(vector<int> a, int n, int k, int sum) // k: so mang con, sum: tong nho nhat
{
	int tong = 0; //tính tổng từng mảng con
	int so_mang_con = 0; // dem so luong mang con
	for (int i = 0; i < n; i++) {
		tong += a[i];
		if (tong > sum) {  //------------
			tong = a[i];
			so_mang_con++;
		}
	}
	so_mang_con++; // cộng thêm 1 lần vì mảng con cuối cùng chưa được cộng
	return so_mang_con <=k; // việc chia thành k-1, k-2 mảng con thì vẫn đúng 
}
int main() {

	int n, k; cin >> n >> k;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		a.push_back(tmp);
	}
	ll right = 0;
	for (int x : a) right += (ll)x;
	ll left = *max_element(a.begin(), a.end());     //------------ 
	int ans = -1;
	while (left <= right) {
		ll mid = (left + right) / 2;
		if (check(a, n, k, mid)) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << ans;
}


--------------------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
bool check(int a, int b, int n, int l) {
	int s = l % a + l % b;
	return s <= n;
}
int main() {
	int a, b, n; // chieu dai, rong, so thanh domino
	cin >> a >> b >> n;
	ll left = 1;
	ll right = b * n;
	int ans = -1;
	while (left <= right) {
		int mid = (left + right) / 2; // cạnh hình vuông
		if (check( a, b, n,mid)) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << ans;
}
