//đếm tần suất xuất hiện của các giá trị trong mảng
#include<iostream>
using namespace std;
int main(){
    int x[100];
    int n;
    cout<<"n= "; cin>>n;
    cout<<"nhap mang: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    /*int dem=0;
    int a[100]={0}; // mang danh dau
    for(int i=0;i<n;i++){
        dem=0;
        if(!a[x[i]]){
            dem++;
            a[x[i]]=1;
        }
    }*/
    int a[100]={0};
    int dem[100];
    for(int i=0;i<n;i++){
        dem[x[i]]++;
    }
    for(int i=0;i<n;i++){
        if(dem[x[i]]!=0&&(!a[x[i]]))
        {cout<<x[i]<<": " <<dem[x[i]]<<endl;
            a[x[i]]=1;
        }
    }
    return 0;
}
