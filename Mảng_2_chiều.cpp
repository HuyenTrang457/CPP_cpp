#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
using ll= long long;
int n, m;
int a[100][100];
void swap(int &a,int &b){
    int tmp= a;
    a=b;
    b=tmp;
}
void sort(int a[], int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
bool compare(int a, int b){
    return a<b;
}
//Sắp xếp các phần tử trong mỗi cột của ma trận theo tăng dần
int main()
{
    ifstream fin("input.txt");
    fin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fin>> a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int curr_col[n]={0};
        for(int j=0;j<n;j++){
            curr_col[j]=a[j][i];
            
        }
        sort(curr_col,curr_col+n);
        for(int j=0;j<n;j++){
            a[j][i]=curr_col[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< a[i][j]<<" ";
        } cout<<endl;
    }
    
    fin.close();
    return 0;
}
