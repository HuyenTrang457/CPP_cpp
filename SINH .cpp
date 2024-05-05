--> thư viện: <algorithm>
next_permutation(a,a+n)  ---> trả về cấu hình kế tiếp của mảng a
cout<<  next_permutation(a,a+n)  ----> trả về TRue( nếu vẫn CÓ THỂ sinh ra cấu hình kế tiếp)
				----> False(nếu đó là cấu hình cuối cùng)

prev_permutation(a,a+n)  ---> trả về cấu hình liền trước, tương tự ở trên

int main() {
	cin >> n;
	ktao();
	do {
		for (int i = 0; i <= n; i++) {
			cout << a[i];
		}
		cout << endl;
	} while (next_permutation(a + 1, a + n + 1));
}


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

--------------------
	#include<iostream>
#include<vector>
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
vector<vector<int>> res;
int main() {
		cin >> n >> k;
      vector<int> b;
		for(int i=0;i<k;i++){
		   int tmp; cin>>tmp;
		   b.push_back(tmp);
		}
		ktao();
		while (!final) {
		   vector<int> tmp;
			for (int i = 1; i <= k; i++) {
				tmp.push_back(a[i]);
			}
			res.push_back(tmp);
			sinh();
		}
	for(int i=res.size()-1;i>=0;i--){
	      if(res[i]==b){
	         cout<< endl<<res.size()-i;
	         for(int x:res[i]) cout<<x<<" ";
	      }  
	}
}

// 12 4
// 8 9 10 11 


-----------------SINH HOÁN VỊ -------------------------------------------
	#include<iostream>
#include<vector>
#include<algorithm>
using ll = long long;
using namespace std;
// k: biến đếm hoán vị, 
int n,k=1, a[100], final = 0;
void swap(int &x,int &y) {
	int tmp = x;
	x = y; 
	y = tmp;
}
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = n-1;
	while (i>=1&&(a[i] > a[i+1])) --i;

	if (i == 0) {
		final = 1;
	}
	else {
		int j = n;
		while (a[i] > a[j]) --j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main() {
	cin >> n;
	ktao();
	while (!final) {
		cout << k << "    ";

		for (int i = 1; i <= n; i++) {
			cout <<a[i];
		}
		k++;
		cout << endl;
		sinh();
	}
}
