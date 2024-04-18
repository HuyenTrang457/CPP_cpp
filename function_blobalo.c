//---------------- Tính tổ hợp chập k của n phần tử------------------------

#include <iostream>
using namespace std;
using ll =  long long;
ll c[1005][1005];
int mod= 1e9 + 7; //sử dụng mod giúp giảm thiểu rủi ro tràn số 
void khoitao(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<= i;j++){
            // Tính C[i][j] : tổ hợp chập j của i
            if(j==0||i==j){
                c[i][j]=1;
            }
            else{
                c[i][j]= c[i-1][j-1]+c[i-1][j];
                c[i][j] %=mod;
            }
        }
    }
}
int main()
{
   khoitao();
   for(int i=0;i<=100;i++){
       for(int j=0;j<=i;j++){
           cout<<c[i][j]<<" ";
       }
       cout<<endl;
   }

    return 0;
}




//-----Kiem tra so nguyen to------------------
bool kiem_tra_ngto(int n){
    if(n==2) return true;
    else{
        for(int i=2;i<n;i++){
            
            if(n%i==0) return false;
        }
        return true;
    }
}
//------Xóa phần tử tại vị trí bằng k-------------------
int x=0;
   for(int i=0;i<n;i++){
       if(a[i]==k){
           n--;
           for(int j=i;j<n;j++){
               a[j]=a[j+1];
           }
           x=1;
           break;
           
       }
   }
   if(x){
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
   }

// -------Mảng cộng dồn-------------------------------
 
#include <iostream>
using namespace std;
int main()
{
    int n; cout<<"Nhap n: "; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f[n]={0};
    f[0]=a[0];
    for(int i=1;i<n;i++){
            f[i]=f[i-1]+a[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<f[i]<<" ";
    }
    return 0;
}

//----Cửa sổ cỡ K-------------------------------------
int k=5;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+5;j++){
            sum+=a[j];
        }
        cout<<sum<<" ";
    }
