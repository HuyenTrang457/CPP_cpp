---------- NGƯỜI DU LỊCH ( chi phí thấp nhất)---------------------------

//n=8 --> output: 92
#include<bits/stdc++.h>
using namespace std;

int a[100][100],x[100],mark[100];
int n,res=10000;
void Try(int i, int sum){
   
   for(int j=1;j<=n;j++){
      if(!mark[j]){
         x[i]=j;
	      sum+= a[x[i-1]][x[i]];
	      mark[j]=1;
	      if(i==n)
	      {
	         sum+= a[x[n]][1];
	         res= min(sum,res);
	      }
	      else{
	         Try(i+1,sum);
	      }
         sum-= a[x[i-1]][x[i]];
         mark[j]=0;
	
      }
   }
	
}
int main()
{
   n=4;
   fstream fin("input.txt");
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
    x[0]=1;
	Try(1,0);
	cout<<endl<<res;
	
}



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

---------------------------------------------------
	[Quay lui-Nhánh cận]. Bài 2. Rat in Maze 1




#include<iostream>
#include <fstream>
#include<vector>
using namespace std;
int n, a[100][100], sum = 0, cnt = 0;
string s = "";
vector<string> paths;
void de_quy(int i, int j) {
    if (i == n && j == n) {
        cout<<s<<endl;
    }

    if (i + 1 <= n && a[i + 1][j])
    {
        s += "D";
        de_quy(i + 1, j);
        s.pop_back(); //loại kí tự cuối khi quay về vòng lặp tiếp theo
    }
    if (j + 1 <= n && a[i][j + 1]) {
        s += "R";
        de_quy(i, j + 1);
        s.pop_back();
    }
   

}
int main()
{
    n = 4;
    ifstream fin("input.txt");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fin >> a[i][j];
        }
    }
    fin.close();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
   if(a[1][1]==0||a[n][n]==0) cout<<"error";
    else de_quy(1, 1);
}


------------------------------------ MÊ CUNG 2 ( 4 ĐƯỜNG ĐI)
	
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100];
int n, cnt = 0;
string res = "";
bool mark[100][100];

void quayLui(int i, int j) {
    if (i == n && j == n) {
        cnt++;
        cout << cnt << ": " << res << endl;
        return;
    }

    // Xuống dưới
    if (i + 1 <= n && a[i + 1][j] == 1 && !mark[i + 1][j]) {
        res += 'D';
        mark[i + 1][j] = true;
        quayLui(i + 1, j);
        res.pop_back();
        mark[i + 1][j] = false;
    }

    // Lên trên
    if (i - 1 >= 1 && a[i - 1][j] == 1 && !mark[i - 1][j]) {
        res += 'U';
        mark[i - 1][j] = true;
        quayLui(i - 1, j);
        res.pop_back();
        mark[i - 1][j] = false;
    }

    // Sang phải
    if (j + 1 <= n && a[i][j + 1] == 1 && !mark[i][j + 1]) {
        res += 'R';
        mark[i][j + 1] = true;
        quayLui(i, j + 1);
        res.pop_back();
        mark[i][j + 1] = false;
    }

    // Sang trái
    if (j - 1 >= 1 && a[i][j - 1] == 1 && !mark[i][j - 1]) {
        res += 'L';
        mark[i][j - 1] = true;
        quayLui(i, j - 1);
        res.pop_back();
        mark[i][j - 1] = false;
    }
}

int main() {
    n = 4; // Kích thước ma trận
    ifstream fin("input.txt");
    if (!fin) {
        cout << "Cannot open input file." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fin >> a[i][j];
        }
    }
    fin.close();

    if (a[1][1] == 1 && a[n][n] == 1) {
        mark[1][1] = true;
        quayLui(1, 1);
    } else {
        cout << "No valid paths available." << endl;
    }

    return 0;
}
