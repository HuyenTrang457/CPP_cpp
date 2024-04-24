
#include <iostream>
using namespace std;
int prime[1000001];
void sieve(){
    // coi tat ca cac so tu 0-->n la so nguyen to 
    for(int i=0;i<1000000;i++){
        prime[i]=1;
    }
    
    // loai so 0 va so 1 
    prime[0]= prime[1]=0;
    for(int i=2;i<= 1000;i++){
        // neu i la so nguyen to 
        if(prime[i]){
            // Duye tat ca boi so cua i va cho chung bang 0 
            for(int j=i*i;j<=1000000;j+=i){
                prime[j]=0; // j khong con la so nguyen to
            }
        }
    }
}
int main()
{
    sieve();
    int n;
    cin>> n;
    for(int i=0;i<=n;i++){
        if(prime[i])  cout<<i<<" ";
    }

    return 0;
}

