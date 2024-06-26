#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
using ll= long long;
int n, m;
int a[100][100];
void swap(int &a,int &b){
    int tmp= a;
    a=b;
    b=tmp;
}
void sort(int a[], int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
bool compare(int a, int b){
    return a<b;
}
//Sắp xếp các phần tử trong mỗi cột của ma trận theo tăng dần
int main()
{
    ifstream fin("input.txt");
    fin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fin>> a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int curr_col[n]={0};
        for(int j=0;j<n;j++){
            curr_col[j]=a[j][i];
            
        }
        sort(curr_col,curr_col+n);
        for(int j=0;j<n;j++){
            a[j][i]=curr_col[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< a[i][j]<<" ";
        } cout<<endl;
    }
    
    fin.close();
    return 0;
}


---------------------------------------------------------------
    //NHÂN HAI MA TRẬN
    #include <bits/stdc++.h>
#include<algorithm>
using namespace std;
using ll= long long;
int n, m,u,v;
int a[100][100];
int b[100][100];
int res[100][100]; // mang ket qua

int tich_vo_huong(int a[], int b[], int n) // nhân hai mảng một chiều
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= a[i]*b[i];
    }
    return sum;
}
int main()
{
    // hàng của a bằng cột của b --> m=u
    ifstream fin("input.txt");
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>> a[i][j];
        }
    }
    fin>>u>>v;
    for(int i=0;i<u;i++){
        for(int j=0;j<v;j++){
            fin>> b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v;j++){
            int cur_col[u]={0};
            for(int k=0;k<u;k++){
                cur_col[k]=b[k][j];
            }
            res[i][j]= tich_vo_huong(a[i],cur_col,u);
        }
    }
    // matrix kết quả: có hàng = hàng a, cột= cột b
    for(int i=0;i<n;i++){
        for(int j=0;j<v;j++){
            cout<< res[i][j]<<" ";
        } cout<<endl;
    }
    
    fin.close();
    return 0;
}


-----BAI 20-------------------------------------------------------------------------------
// ĐẾM CỰC ĐẠI ĐỊA PHƯƠNG  ( OUTPUT CÒN SAI)
     #include<bits/stdc++.h>
 using namespace std;
 
 int dx[4]={-1,-1,1,1};
 int dy[4]={-1,1,-1,1};
 bool is_local_max_value(int a[100][100], int n, int m, int i,int j){
     int val = a[i][j];
     for(int k=0;k<4;k++){
         int i1= i+dx[k], j1= j+dy[k];
         if(i1>=0 && i1<n && j1>=0&&j1<m&& a[i1][j1]>=val) 
         return false;  // Nếu có điểm lớn hơn hoặc bằng thì không phải cực đại
     }
     return true; // Nếu không có điểm lớn hơn hoặc bằng thì là cực đại
 }
 
 // Hàm kiểm tra và đếm số cực đại 
 int  count_local_max_value(int a[100][100], int n, int m){
     int count=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(is_local_max_value(a, n, m,i,j)){
                 count++;

             }
         }
     }
     return count;
 }
 
 int main(){
      ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n, m;
    int a[100][100];
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>> a[i][j];
        }
    }
    int count=0;
    count= count_local_max_value(a,n,m);
    cout<<count;
 }

-------------------------------
// Cho ma trận vuông A[N][N]. Hãy in ra các số xuất hiện ở mọi hàng theo 
    //thứ tự từ bé đến lớn, mỗi giá trị xuất hiện chỉ liệt kê 1 lần.
#include<bits/stdc++.h>
int n, m;
using namespace std;
int x[100][100]={1};
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>> a[i][j];
        }
    } 
 vector<int> vec; // vector lưu mảng một chiều ( hàng đầu tiên)
    for(int i=0;i<n;i++){
        vector<int> v; // vector lưu lần lượt các hàng tiếp theo
        if(i==0){
            for(int j=0;j<m;j++){
            vec.push_back(a[0][j]);
                }
        }else{
        for(int j=0;j<m;j++){
            v.push_back(a[i][j]);
        }
        for(int k=0;k<vec.size();k++){
            auto it= find(v.begin(),v.end(),vec[k]);
            if(it== v.end()) {
                vec.erase(vec.begin()+k); // xóa giá trị tại vị trí k
            }
        }
        }
    }
    set<int> s(vec.begin(),vec.end());
    for(int x:s) cout<<x<<" ";
