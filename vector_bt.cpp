//-----------------EX1--------------------------------
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int op; cin>>op;
        if(op==1)
        {
            int tmp;
            cin>>tmp;
            vec.push_back(tmp);
        } else if(op==2){
            if(!vec.empty()){
                vec.pop_back();
            }
            
        }
    }
    if(vec.empty()){
        cout<<"EMPTY";
    }else{
        for(int x : vec){
            cout<<x<<endl;
        }
    }
    return 0;
}

-----------------EX2: ERASE - INSERT-------------------------------
    /*Thao tác 1 : Chèn phần tử vào vị trí bất kì trong vector.
Thao tác 2 : Xóa phần tử ở vị trí bất kì trong vector
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int m; cin>>m; //số lượng phần tử vecto
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        vec.push_back(tmp);
    }
    int n; cin>>n; // số thao tác sẽ thực hiện
    for(int i=0;i<n;i++){
        int op; cin>>op;
        if(op==1){
            int pos, val;
            cin>>pos>>val;
             vec.insert(vec.begin() + pos, val);
        }else if(op==2){
            if(!vec.empty())
            {int pos;
            cin>>pos;
            vec.erase(vec.begin()+pos);}
        }
    }
        if(vec.empty()){
            cout<<"EMPTY";
            
        }else{
            for(int x : vec){
                cout<<x<<" ";
            }
        }
    
    
    return 0;
}

----------------------EX3--SORT------------------------------
    
//Tăng dần 
    sort(vec.begin(),vec.end());
// Giảm dần
    sort(vec.begin(), vec.end(), greater<int>());
    
    return 0;
}


--------------------EX7 ------VECTOR----PAIR------------------
    
#include <iostream>
#include<vector>
#include<utility>
#include<math.h>
using namespace std;
double distinct_point_to_0(pair<int, int> p){
    return sqrt(pow(p.first,2)+pow(p.second,2));
}
int main()
{
    vector<pair<int,int>> point;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        point.push_back(make_pair(x,y));
    }
    vector<double> distincts;
    for(int i=0;i<n;i++)
    {
        double dis=distinct_point_to_0(point[i]);
        distincts.push_back(dis);
    }
    cout << fixed; // Để hiển thị số thập phân với độ chính xác cố định
    cout.precision(2); // Đặt độ chính xác là 2 số sau dấu phẩy
    for(double x:distincts){
        cout<<x<<" ";
    }
    return 0;
}

//-------------PAIR---- ĐIỂM x, y, z------------------

#include <iostream>
#include<vector>
#include<utility>
#include<math.h>
using namespace std;
int sum_point(pair<pair<int,int>,int> p){
    return p.first.first+p.first.second+p.second;  //TRUY CẬP
}
int main(){
    int n; cin>>n;
    vector<pair<pair<int, int>,int>> points;         //TẠO
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        points.push_back(make_pair(make_pair(x,y),z)); //TẠO
    }
    vector<int> sum;
    for(int i=0;i<n;i++){
        int s=sum_point(points[i]);
        sum.push_back(s);
    }
    for(int x:sum) cout<<x<<" ";
    return 0;
}

--------------TẦN SUẤT 1-----COUT<< số<< tần suất xuất hiện-------------------
    
#include <iostream>
#include<vector>
#include<utility>
#include<math.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<int, int>> results;
    vector<int> p;
    for(int i=0;i<n;i++){
        int tmp;cin>>tmp;
        p.push_back(tmp);
    }
    int a[100]={false};
    for(int i=0;i<n;i++){
        if(!a[p[i]]){
            results.push_back(make_pair(p[i],1));
            a[p[i]]= true;        
            
        }else{
            for(int j=0;results.size();j++)
            {if(p[i]==results[j].first){
                results[j].second++;
                break; }
            }
        }
    }
    for(int i=0;i<results.size();i++){
        cout<<results[i].first<<" "<<results[i].second<<endl;
    }
    return 0;
}

--------------TẦN SUẤT 1-----COUT<<     CHỮ SỐ << tần suất xuất hiện-------------------

    
#include <iostream>
#include<vector>
#include<utility>
#include<math.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<char, int>> results;
    vector<char> p;
    for(int i=0;i<n;i++){
        char tmp;cin>>tmp;
        p.push_back(tmp);
    }
    int a[1000]={false}; //mang danh dau; //lỗi bộ nhớ a
    for(int i=0;i<n;i++){
        if(!a[p[i]]){
            results.push_back(make_pair(p[i],1));
            a[p[i]]= true;        
            
        }else{
            for(int j=0;j<results.size();j++) // hoặc j chạy đến results.size(): vì lúc này size mới chỉ =i
            {if(p[i]==results[j].first){
                results[j].second++;
                break;}
            }
        }
    }
    for(int i=0;i<results.size();i++){
        cout<<results[i].first<<" "<<results[i].second<<endl;
    }
    return 0;
}

