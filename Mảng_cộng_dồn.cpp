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
        --l; --r; // do đề yêu cầu l, r từ 1 --> n mà mảng a từ 0--> n-1 nên phải giảm 
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
        res+= 1ll* a[i]*f[i];  // vì res có thể bị tràn nên nhân thêm 1ll
    }
    cout<<res<<endl;
    return 0;
}

    for(int i=0;i<n;i++){
        cout<< f[i]<<" ";
    }
    
    return 0;
}


------------------------------------------------------------------------
    /*Tèo mới lên đại học và kiếm được một công việc tại hàng trà sữa, 
    có không quá 200000 cốc trà sữa xếp thành 1 hàng ngang, ban đầu mỗi cốc trà sữa 
có độ ngọt bằng 0. Tèo tiến hành liên tiếp N các thao tác, mỗi thao tác 
anh ta sẽ thêm 1 gam đường vào các cốc trà sữa từ vị trí L tới vị trí R.
    Sau cùng những cốc trà sữa có lượng đường >= K gam được chuyển đi để phục vụ khách hàng. 
Có nhiều câu hỏi, mỗi câu hỏi yêu cầu bạn trả lời trong các cốc trà từ thứ L tới thứ R 
có bao nhiêu cốc đạt chuẩn để bán cho khách hàng ?
    */
#include <iostream>
#include<algorithm>
using namespace std;
using ll= long long;
int a[200000];
int f[200000];
// f[i] số lượng cốc trà sữa >=k nằm trong đoạn từ 1 -->i
int main()
{
    int n,k,q; cin>>n>>k>>q;
    for(int i=1;i<=n;i++){
        int l,r; cin>>l>>r;
        a[l]+=1;      
        a[r+1]-=1;
    }
    for(int i=1;i<=200000;i++){
        a[i]+= a[i-1];
    }
    int dem=0;
    for(int i=1;i<=200000;i++){
        if(a[i]>=k) ++dem;
        f[i]=dem;
    }
    while(q--){
        int l,r; cin>>l>>r;
        cout<<f[r]-f[l-1]<< endl;
    }
    
    return 0;
    
}
