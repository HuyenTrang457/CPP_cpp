#include<iostream>
using namespace std;
int giai_thua(int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s *= i;
	}
	return s;
}
int to_hop(int n, int k)
{
	return giai_thua(n) / (giai_thua(n - k) * giai_thua(k));
}
void xuat_tam_giac_pascal(int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << to_hop(i, j) << " ";
		}
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	xuat_tam_giac_pascal(n);
}
