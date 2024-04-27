/*
1.Tìm vị trí xuất hiện đầu tiên của phần tử k trong mảng, nếu không tồn tại k in ra -1.
2. Tìm vị trí xuất hiện cuối cùng của phần tử k trong mảng, nếu không tồn tại k in ra -1.
3. Tìm vị trí xuất hiện đầu tiên của phần tử >= k trong mảng, nếu không tồn tại phần tử >=k in ra -1.
4. Tìm vị trí xuất hiện đầu tiên của phần tử > k trong mảng, nếu không tồn tại phần tử >X in ra -1.
5. Tìm số lần xuất hiện của phần tử k trong mảng sử dụng kết quả của hàm 1 và 2.
*/

#include <iostream>
using namespace std;
// 1
int vi_tri_dau_tien_bang_x(int a[], int n, int k){
    int l=0, r=n-1, x=-1;
    while(l<=r){
        int tmp=(r+l)/2;
        if (a[tmp] == k) {
            x = tmp; 
            r= tmp-1;
        }
        else if(a[tmp]<k){
            l= tmp+1;
        }
        else if(a[tmp]>k){
            r=tmp-1;
        }
    }
    return x;
}
// 2
int vi_tri_cuoi_cung_bang_k(int a[], int n, int k){
    int l= 0, r= n-1,x=-1;
    int tmp;
    for(int i=0;i<n;i++){
    
        while(l<=r){
             tmp= (r+l)/2;
            if(a[tmp]==k){
                l=tmp+1;
                x=tmp;
            }
            else if(a[tmp]<k){
                l= tmp+1;
            }
            else if(a[tmp]>k){
                r=tmp-1;
            }
        }
    }
    return x;
}
// 3
int vi_tri_dau_tien_lon_hon_bang(int a[], int n, int k){
    int l=0, r=n-1, x=-1;
    while(l<=r){
        int tmp=(r+l)/2;
        if (a[tmp] >= k) {
            x = tmp; 
            r= tmp-1;
        }
        else if(a[tmp]<k){
            l= tmp+1;
        }
        
    }
    return x;
}
// 4
int vi_tri_dau_tien_lon_hon(int a[], int n, int k){
    int l=0, r=n-1, x=-1;
    while(l<=r){
        int tmp=(r+l)/2;
        if (a[tmp] > k) {
            x = tmp; 
            r= tmp-1;
        }
        else if(a[tmp]<=k){
            l= tmp+1;
        }
        
        
    }
    return x;
}

int main()
{
    int a[10]={19,23, 1600, 1600,1600, 1600, 1600, 6098, 6744, 9192 };
    int m= vi_tri_dau_tien_bang_x(a,10,1600);
    int n= vi_tri_cuoi_cung(a,10,1600);
  // 5
    cout<<n-m+1;
    return 0;
}



-----------------------------------------------------------------------------------------
[Sắp xếp - Tìm Kiếm]. Bài 27. Số nhỏ nhất lớn hơn A[i]
    
    #include <bits/stdc++.h>
using namespace std;
int vi_tri_dau_tien_lon_hon(int a[], int n, int k){
   
    int l=0, r=n-1, x=-1;
    a[-1]=-1;
    while(l<=r){
        int tmp=(r+l)/2;
        if (a[tmp] > k) {
            x = tmp; 
            r= tmp-1;
        }
        else if(a[tmp]<=k){
            l= tmp+1;
        }
        
        
    }
    return a[x];
}

int main() {
    
    int a[9] ={6, 3, 9, 8, 10, 2, 1, 15, 7};  //7 6 10 9 15 3 2 _ 8
    int n=9;
    vector<int> ve;
    for(int x:a){
       ve.push_back(x);
    }
    int x;
    int b[100];
    sort(a,a+n);
    for(int i=0;i<n;i++){
       b[a[i]]= vi_tri_dau_tien_lon_hon(a,n,a[i]);
    }
    for(int x:ve){
       cout<<x<<"   ";
       if(b[x]!=-1) cout<<b[x];
       else{
          cout<<"_";
       }
       cout<<endl;
    }
    return 0;
}

