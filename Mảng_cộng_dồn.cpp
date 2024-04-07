------------EX2--------------------------------------------

#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int p, n; //p: so luong truy van
    cin>>n>>p;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    ll pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]= pre[i-1]+a[i];
    }
    while(p--){
        int l,r; 
        cin>>l>>r;
        if(l==0) cout<<pre[r];
        else{cout<<pre[r]-pre[l-1]<<endl;}
    }
    return 0;
}


---------- CỘNG DỒN MẢNG HAI CHIỀU----------------
    #include<bits/stdc++.h>
using namespace std;
typedef long long ll; // Định nghĩa kiểu dữ liệu long long
int main(){
    
    int n, m; //n:hàng, m: cột
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll pre[n][m]; // mảng cộng dồn
    for(int i=0;i<n;i++){
        pre[i][0]=a[i][0];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            pre[i][j]= pre[i][j-1]+a[i][j];
        }
    }
    int q; cin>>q; // số lượng truy vấn
    for(int i=0;i<q;i++){ // chạy từng truy vấn
        int x1,x2,y1,y2; // x: rown,  y: columb
        cin>>x1>>x2>>y1>>y2;
        ll sum;
        for(int i=x1;i<=x2;i++){
            if(y1==0) sum+= pre[y2];
            else sum+=(pre[y2]-pre[y1-1]);
        }
        cout<<sum<< endl;
    }
    
    return 0;
}
