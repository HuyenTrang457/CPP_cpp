-------------DUYỆT SET-----------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{  set<int> se;
    int a[7]={1,2,1,1,3,4,5};
    for(int i=0;i<7;i++){
        se.insert(a[i]);
    }
// Cách 1: Dùng for each
    for(int x:se){
        cout<<x<<" ";
    }
 // Cách 2:  dùng iterator
    for(set<int>::iterator it= se.begin();it!=se.end();it++){
        cout<<*it<<" ";
    }
    
// Cách 3: dùng auto
    
    for(auto it = se.begin(); it!= se.end();it++){
        cout<< *it<<" ";
    }
    
    return 0;
}

---------------PREV----------------------------------------------------
    #include <bits/stdc++.h>
using namespace std;
int main(){
    int a[7] = {5, 5, 1, 2, 3, 4, 5};
    set<int> se(a, a + 7);
    auto it = se.find(4); 
    it =prev(it,2); // giống với it-=2 // Để di chuyển con trỏ it lùi lại 2 vị trí, 
                                    //bạn cần sử dụng phép toán std::pre
    cout << *it << endl;
}
    ----> OUTPUT: 2

-------------------
        #include <bits/stdc++.h>
using namespace std;
    int main(){
        int a[7] = {5, 5, 1, 2, 3, 4, 5};
        set<int> se(a, a + 7);
        auto it = se.find(7);
        --it;
        cout << *it << endl;
} OUTPUT: 5

---------------TRUY VẤN TRÊN MẢNG----------------------------------
        #include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
multiset<int> se;
for(int i=0;i<n;i++){
    cin>>a[i];
    se.insert(a[i]);
}
int m; cin>>m; // số thao tác
for(int i=0;i<m;i++){
    int op; cin>>op;
    if(op==1){  //THÊM X VÀO MẢNG
        int x; cin>>x;
        se.insert(x);
    } else if(op==2){  // XÓA X NẾU TỒN TẠI
        int x;cin>>x;
        auto it= se.find(x);
        if(it!=se.end()) se.erase(x);
    } else{             //KIỂM TRA X CÓ TỒN TẠI HAY KHÔNG
        int x; cin>>x;
        auto it= se.find(x);
        if(it==se.end()) cout<<"No"<<endl;
        else cout<<"yes"<<endl;
    }
}
}

------------MIN MAX-----------THAO TÁC--------------------------------------
    
#include <iostream>
using namespace std;
#include<set>
int main()
{
    int n; cin>>n;
    int a[n];
    multiset<int> se;
    multiset<int>sortedMultiset;
    set<int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    int q; cin>>q; // so luong thao tac
    for(int i=0;i<q;i++){
        int op; cin>>op;
        if(op==1){             //Thao tác 1 : Thêm phần tử X vào mảng
            int x; cin>>x;
            se.insert(x);
        }else if(op==2){         //Thao tác 2 : Xóa mọi giá trị X khỏi mảng nếu X tồn tại trong mảng
            int x; cin>>x;
            auto it= se.find(x);
            if(it!=se.end()) se.erase(x);
            
        }else if(op==3){            //Thao tác 3 : Tìm phần tử nhỏ nhất trong mảng
                m.insert(se.begin(),se.end());
                cout <<"min= "<< *m.begin() << endl;
        } else{
            m.insert(se.begin(),se.end());    //Thao tác 4 : Tìm phần tử lớn nhất trong mảng

            auto it = m.end(); --it;
            cout << "max= "<<*it << endl;
        }
    }
    
    return 0;
}


----------------Set vs Lower_bound, Upper_bound-----------------------
    
    #include<iostream>
#include<set>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    multiset<int> se;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    int t; cin>> t; // so thao tac;
    set<int> m;
    m.insert(se.begin(),se.end());
    for(int i=0;i<t;i++){
        int op; cin>>op;
        if(op==1){
            int x; cin>>x;
            se.insert(x);
        } else if(op==2){
            int x; cin>>x;
            auto it= se.find(x);
            if(it!= se.end()) se.erase(it);
        }else if(op==3){
            int x; cin>>x;
             int p=0;
            for(int k:m){
                if(k>=x){
                    cout<<k<<endl;  p=1; break;}
            }
            if(p!=1) cout<<"-1";
        }
        else{
            int x; cin>>x;
             int p=0;
            for(auto it=m.rend();it!=m.rbegin();it--){
               
                if(*it<=x){
                    cout<<*it<<endl;  p=1;  break;
                }
            }
            if(p!=1) cout<<"-1";

        }
    }
    
   for(int x:se) cout<< x<<" ";
    return 0;
}
