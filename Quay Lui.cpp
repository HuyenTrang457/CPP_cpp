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
