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
