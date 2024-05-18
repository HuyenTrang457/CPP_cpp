--------- SINH SÂU NHỊ PHÂN---------------------

#include<iostream>
using namespace std;

int a[1000], n;
void in() {
	for (int j = 1; j <= n; j++) {
		cout << a[j];
	}
}
void Try(int i)
{
	
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n) {
			in();
			cout << endl;
		}
		else {
			Try(i + 1);
		}
	}
}
int main() {
	cin >> n;
	Try(1);
}

----------------------------------------
// Sinh to hop chap k cua n
#include<iostream>
using namespace std;
int a[100], n,k; // to hop k cua n phan tu
int mark[100] = { 0 };
void inkq() {
	for (int i = 1; i <= n; i++) {
		if(a[i]) cout << a[i];
	}
	cout << endl;
}
void sinh(int i) {
	for(int j=a[i-1]+1;j<=n-k+i;j++){
	   a[i]=j;
	   if(i==k) inkq();
	   else sinh(i+1);
	}
}
int main() {
	n = 6; k = 4;
	sinh(1);
}
