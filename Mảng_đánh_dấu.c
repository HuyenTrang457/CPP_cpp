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
