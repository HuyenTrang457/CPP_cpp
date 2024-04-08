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


---------- THU HOẠCH CÀ RỐT ------CỘNG DỒN MẢNG HAI CHIỀU----------------
   #include<bits/stdc++.h>
using namespace std;
typedef long long ll; // Định nghĩa kiểu dữ liệu long long
ll pre[1005][1005]; // mảng cộng dồn
int a[1005][1005];
int main(){
    
    int n, m; //n:hàng, m: cột
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    
    // xây dựng mảng cộng dồn prefix
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pre[i][j]= pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
        }
    }
    int q; cin>>q; // số lượng truy vấn
    for(int i=0;i<q;i++){ // chạy từng truy vấn
        int x1,x2,y1,y2; // x: rown,  y: columb
        cin>>x1>>x2>>y1>>y2;
        cout<< pre[x2][y2]-pre[x2][y1-1]-pre[x1-1][y2]+a[x2-x1][y2-y1]<<endl;
    }
    
    return 0;
}

-----------------MẢNG HIỆU DỒN--------------------------------
    //tăng các phần tử từ chỉ số l đến r lên k đơn vị 
       #include<bits/stdc++.h>
using namespace std;
typedef long long ll; // Định nghĩa kiểu dữ liệu long long
 // mảng cộng dồn
int a[1005][1005];
int main(){
    
    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d[n+2];
    d[0]=a[0];
    for(int i=1;i<=n;i++){
        d[i]=a[i]-a[i-1];
    }
    
    while(q--){
        int l,r,k; //tăng các phần tử từ chỉ số l đến r lên k đơn vị 
        cin>>l>>r>>k;
        d[l]+=k;
        d[r+1]-=k;
        
    }
    ll f[n];
    f[0]=d[0];
    for(int i=1;i<n;i++){
        f[i]=f[i-1]+d[i];
    }


    --------------------Mảng Cộng Dồn - Mảng Hiệu]. Bài 6. Tổng lớn nhất----------
    
#include <iostream>
#include<algorithm>
using namespace std;
using ll= long long;
int main()
{
    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d[n+5]={0};
    while(q--){
        int l, r; cin>>l>>r;
        --l; --r;
        d[l]+=1;
        d[r+1]-=1;
    }
    int f[n];
    f[0]=d[0];
    for(int i=1;i<=n;i++){
        f[i]=f[i-1]+d[i];
    }
    sort(f,f+n,greater<int>()); // sắp xếp giảm dần
    sort(a,a+n,greater<int>());
    ll res;
    for(int i=0;i<n;i++){
        res+= a[i]*f[i]; 
    }
    cout<<res<<endl;
    return 0;
}

    for(int i=0;i<n;i++){
        cout<< f[i]<<" ";
    }
    
    return 0;
}
