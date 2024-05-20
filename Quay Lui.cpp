CHƯA HOÀN THÀNH BÀI 8 QUÂN HẬU

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
// SINH TỔ HỢP CHẬP K CỦA N PHẦN TỬ
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


----------------------------------------

	// SINH HOÁN VỊ N PHẦN TỬ
#include<iostream>
using namespace std;
int a[100], n=4,k; // to hop k cua n phan tu
int mark[100] = { 0 };
void inkq() {
	for (int i = 1; i <= n; i++) {
		 cout << a[i];
	}
	cout << endl;
}
void sinh(int i) {
	for (int j = 1; j <= n; j++) {
		if (!mark[j]) {
			a[i] = j;
			mark[j] = 1;

			if (i == n) {
				inkq();
			}
			else sinh(i + 1);
			mark[j] = 0;
		}
		
	}
}
int main() {
   sinh(1);
}


---------------------------------------
	Bài 1. Tập hợp có tổng bằng S
#include<iostream>
using namespace std;
int n, x[100]={0}, sum = 0,k,s;
int cnt=0,a[100];
void Try(int i,int start) {
   for(int j=start;j<=n;j++){
      if(!x[j]){
         sum+=j;
         x[j]=1;
         a[i]=j;
         if(i==k&&sum==s){
            cnt++;
         }
         else if(i<k&&sum<s) Try(i+1,j+1);
      x[j]=0;
      sum-=j;
      }
   }
}
int main()
{
	n=16;k=8;s=91;

	Try(1,1);
	cout <<cnt;
}
