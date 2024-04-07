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
