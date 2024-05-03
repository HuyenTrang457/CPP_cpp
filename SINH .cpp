## Sinh nhị phân

#include<iostream>
using namespace std;
int n, a[100], final=0;
void ktao() {
	for (int i = 1; i <=n; i++) {   // i bắt đầu từ 1 để tránh chạy về 0(giá trị để kết thúc sinh
		a[i] = 0;
	}
}
void sinh() {
	int i = n;
	while (i >=1 && a[i] == 1) {
		a[i] = 0; 
		i--;
	}
	if (i == 0) {  // mảng sinh cuối cùng
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
