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

---------------------------------------------------------------------------------------
 Bài 25. Check in sân bay
Tại sân bay, mọi người đang làm thủ tục để check in. Có tất cả N vị khách. Vị khách thứ i tới làm thủ tục tại thời điểm T[i] 
và cần D[i] thời gian để check in xong. Các bạn hãy xác định xem thời điểm nào tất cả các vị khách làm xong thủ tục để lên máy bay?

#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(const pair<int, int> p1, const pair<int, int> p2) {
	return p1.first < p2.first;
}
int main() {
	 vector<pair<int, int>> p;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		p.push_back(make_pair(tmp1, tmp2));
	}
	sort(p.begin(), p.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << p[i].first << " " << p[i].second << endl;
	}
	int time_current = 0;
	for (int i = 0; i < n; i++) {
		if (time_current > p[i].first) {
			time_current = p[i].first + p[i].second + time_current - p[i].first;
		}
		else {
			time_current = p[i].first + p[i].second;
		}
	}
	cout << time_current;

	//3 2 1 ,8 3, 5 7


}
