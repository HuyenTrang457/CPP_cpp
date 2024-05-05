## Sinh nhị phân

#include<iostream>
using namespace std;
int n, a[100], final=0;
void ktao() {
	for (int i = 1; i <=n; i++) {   // i bắt đầu từ 1 để tránh chạy về 0(giá trị để kết thúc cấu hình
		a[i] = 0;
	}
}
void sinh() {
	int i = n;
	while (i >=1 && a[i] == 1) {
		a[i] = 0; 
		i--;
	}
	if (i == 0) {  // mảng sinh cuối cùng, kết thúc cấu hình
		final = 1;
	}
	else {  // else if (a[i]==0)
		a[i] = 1;
	}
}
int main() {
	cin >> n;
	while (final == 0) {
		for (int i = 1; i <= n; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();

	}

}



---------------- SINH TỔ HỢP-----------------------------------------------------------------
#include<iostream>
using namespace std;
using ll = long long;
int n, k, final = 0;
int a[100];

void ktao() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = k;
	while (i != 0 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		final = 1;
	}
	else // a[i] != n-k+i (a[i] chua dat max
	{
	   a[i]++;
		for (int j = i+1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}
int main() {
		cin >> n >> k;
		ktao();
		while (!final) {
			for (int i = 1; i <= k; i++) {
				cout << a[i];
			}
			cout << endl;
			sinh();
		}
}

