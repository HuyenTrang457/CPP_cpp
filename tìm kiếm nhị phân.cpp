// lower_bound : tìm kiếm  phần tử nhỏ nhất lớn hơn hoặc bằng giá trị x trong mảng, vector (đã sắp xếp)
---> kết quả trả ra iterater
#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> a = {1, 2, 3, 3, 3, 4, 6};
auto it = lower_bound(a.begin(), a.end(), 3);
if(it == a.end()){
  cout << "NOT FOUND\n";
  }
else{
  cout << *it << endl;
  }
  cout << (it - a.begin()) << endl;
}

// upper_bound : tìm kiếm phần tử nhỏ nhất lớn hơn giá trị x... ( khác lower_bound ở dấu =x)
