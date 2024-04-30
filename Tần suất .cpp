[Sắp xếp - Tìm Kiếm]. Bài 23. Sắp xếp theo tần suất

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// sắp xếp giảm dần theo số lượng --> tăng dần theo số
bool compare(const pair<int, int>& a, const pair<int, int>& b) { 
    if(a.second!= b.second) return a.second > b.second;
    else return a<b;
}
int main() {
	int n = 10;
	int a[n] = {6,8, 4, 10, 3, 4, 10, 2, 4, 1 };
	vector<int> count(1000,0); // mảng đếm số lượng
		vector<pair<int, int>> re;

   //4 4 4 10 10 1 2 3 6 8 

	for (int i = 0; i < n; i++) {
		count[a[i]]++;
		
	}
	for (int i = 0; i < n; ++i) {
		re.push_back(make_pair(a[i], count[a[i]]));
	}

	sort(re.begin(), re.end(), compare);
	for (int i = 0; i < re.size(); i++) {
		cout << re[i].first << "  "<<re[i].second<<endl;
	}
	
   return 0;
	
}
