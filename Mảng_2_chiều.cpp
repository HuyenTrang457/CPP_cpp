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
