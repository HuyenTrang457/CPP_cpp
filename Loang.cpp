
#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int n, m;
int a[100][100];
/* TRường hợp tính cả  chung đỉnh
    int dx[8]={-1,0,1,1,1,0,-1,-1};
    int dy[8]={-1,-1,-1,0,1,1,1,0};

    Quân mã
    int dx[8]={-2,-2,-1,1,2,2,1,-1};
    int dy[8]={-1,1,2,2,1,-1,-2,-2};
*/
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void loang(int i, int j){
    a[i][j]=0;
    for(int k=0;k<4;k++){
        int i1= i +dx[k], j1= j+dy[k];
        if(i1>=0 && i1<n && j1>=0 && j1<=m && a[i1][j1]){
            loang(i1,j1);
        }
    }
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>> a[i][j];
        }
    }
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                dem++;
                loang(i,j);
            }
        }
    }
    cout<<dem;
    fin.close();
    fout.close();
    return 0;
}


---------------------------------------------------------------------
/*    [Mảng 2 Chiều]. Bài 25. Diện tích lơn nhất
Cho một ma trận nhị phân cỡ NxM chỉ bao gồm các số 0, 1. Hãy xác định vùng nhiều số
1 nhất trên ma trận, biết rằng các ô có chung cạnh được coi là cùng miền.

*/
#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int n, m;
int a[100][100];

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

void loang(int i, int j, int &dem){

    dem++; // tăng đếm mỗi lần loang sang ô mới
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1]){
            loang(i1, j1, dem); // Truyền biến dem xuống các lần gọi đệ quy
        }
    }
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>> a[i][j];
        }
    }
    int sum[100]={0};
    int   max=0;
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dem=0; // khởi tạo đếm= 0 
            if(a[i][j]==1){
                loang(i,j, dem);
            }
            if(dem>max) max=dem;
        }
    }
    cout<<max;
    fin.close();
    fout.close();
    return 0;
}




------------------------------------------------------------------------
//ĐƯỜNG ĐI QUÂN TỊNH
    //xác định xem số lượng ô trên bàn cờ mà quân Tịnh có thể di chuyển
//tới, biết rằng nó có thể đi qua đi lại 1 ô trống nhiều lần và không thể đi vào ô có vật cản.

    #include <bits/stdc++.h>
using namespace std;
using ll= long long;
int n, m,s,t;
int a[100][100];
/* TRường hợp tính cả  chung đỉnh
    int dx[8]={-1,0,1,1,1,0,-1,-1};
    int dy[8]={-1,-1,-1,0,1,1,1,0};

    Quân mã
    int dx[8]={-2,-2,-1,1,2,2,1,-1};
    int dy[8]={-1,1,2,2,1,-1,-2,-2};
*/
int dx[4]={-1,-1,1,1};
int dy[4]={-1,1,-1,1};
int dem=0;
void loang(int i, int j){
    a[i][j]=1;
    ++dem;
    for(int k=0;k<4;k++){
        int i1= i +dx[k], j1= j+dy[k];
        if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]==0){
            loang(i1,j1);
        }
    }
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin>>n>>m;
    fin>>s>>t;
    s--;t--;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>> a[i][j];
        }
    }
    loang(s,t);
    cout<<dem;
    fin.close();
    fout.close();
    return 0;
}


