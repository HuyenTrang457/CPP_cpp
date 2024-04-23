
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
