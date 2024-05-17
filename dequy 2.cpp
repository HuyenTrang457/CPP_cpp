#include<iostream>
#include <bits/stdc++.h> 
int n;
using namespace std;
/*float tong(int n) {
	if (n == 1) return 1;
	return tong(n - 1) + float(1) / n;
}
int main() {
	cout << tong(2);

}

*/

int tong2(int n) {
	if (n == 1) return 2;
	return tong2(n - 1) + n * (n + 1);
}

int fibona(int x) { // fibona tai vi tri x
	if (x == 1 || x == 2) return 1;
	return fibona(x - 1) + fibona(x - 2);
}
int ex5(int n) {
	if (n == 0) return 0;
	return ex5(n / 10) + 1;
}
void  ex4_c2(int n){
   // 1 2 3 12
   if(n==0)cout<<"0";
   if(n>0){
    cout<< n%10 ;
    ex4_c2(n/10);
   }
}

int sum = 0, du;
int ex4(int n){
   if(n){
      du = n % 10;
      sum = (sum*10) + du;
      ex4(n/10);
   }
   else return sum; // điều kiện dừng
   return sum;
}
string  dao_nguoc_so_2(int n){
   return to_string(n%10)+dao_nguoc_so_2(n/10);
}

int ex6(int n)// chuyen sang nhi phan
{
   if(n){
      du= n%2;
      sum= sum*10+ du;
      ex6(n/2);
   }
   else return sum;
   return sum;
}
int p=-1;
int ex6_2(int n){
    if(n>0) return (n % 2) * pow(10, p++)+ ex6_2(n/2);
}
int main() {
	
	/* for (int i = 1; i <= 5; i++) {
		cout << fibona(i) << " ";
	}
	*/
	//cout<<dem_so_chu_so(1234355);

	 cout<<ex6_2(11);
	
}
