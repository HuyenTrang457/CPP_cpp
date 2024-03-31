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


/*hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng,
nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy số có giá trị nhỏ nhất */
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
    int max=0;
    int index=0;
    int min=100;
    for(int i=0;i<n;i++){
        if(max<dem[x[i]]){
            max=dem[x[i]];
            
            min=x[i];
        }
        else if(max==dem[x[i]]){
            if(min>x[i]) min=x[i];
        }
    }
    cout<<endl<< min;
    return 0;
}
--------------------------
    //đếm tần suất xuất hiện của các giá trị trong mảng
#include<iostream>
using namespace std;
int main(){
    int x[100],y[100];
    int n,m;
    cout<<"m= "; cin>>m;
    cout<<"nhap mang A: ";
    for(int i=0;i<m;i++){
        cin>>x[i];
    }
    cout<<"n="; cin>>n;
    cout<<endl<<"nhap mang B: ";
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    int p=3;
    m=m+n;
    for(int i=0;i<m;i++){
        if(i==p){
            for(int j=i;j<i+n;j++){
                x[j]=y[j-p];
            }
            for(int k=)
        }
        
    }
    return 0;
}
