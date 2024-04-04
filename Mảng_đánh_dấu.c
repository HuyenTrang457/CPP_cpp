----------------Baif5. GỬI THƯ----------------------------------

#include<iostream>
 #include<climits>
 #include<math.h>
 using namespace std;
 int main(){
     int n=4;
     int a[n]={-5,-2,2,7};
     int min, max;
     for(int i=0;i<n;i++){
           max=INT_MIN;
         min=INT_MAX;
         for(int j=0;j<n;j++){
             if(i!=j){
                int  x= abs(a[i]-a[j]);
                if(x>max) max=x;
                if(x<min) min=x;
             }
         }
         cout<<min<<" "<<max<<endl;
     }
     return 0;
 }

--------------------
#include <iostream>
#include<climits>
using namespace std;
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
int find_max_le(int a[], int n, int k){
    int max= INT_MIN;
    for(int i=k;i<n;i++){
        if(a[i]%2==1&&max<a[i]) max=a[i];
    }
    return max;
}
int main()
{
    int n=10;
    int a[n]={1,2, 3, 9, 7, 4, 8, 6, 10, 5};
    int j=0;
    for(int i=0;i<n;i++){
        int x=find_max_le(a,n,j);
        swap(x,a[j]);
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
