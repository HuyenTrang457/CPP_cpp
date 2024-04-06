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
