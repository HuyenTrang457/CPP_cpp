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
int find_max_le(int a[], int n, int k) // tìm vị trí có gtln từ k tới n
{    int max= INT_MIN;
    int index=k;
    for(int i=k;i<n;i++){
        if(a[i]%2==1&&max<a[i]) 
        {max=a[i]; index=i;}
    }
    return index; // vị trí có gtln
}
int find_max_chan(int a[], int n,int k)
{
    int max=INT_MIN;
    int index=k;
    for(int i=k;i<n;i++){
        if(a[i]%2==0&&max<a[i])
        {
            max=a[i]; index=i;
        }
    }
    return index;
}
int main()
{
    int n=10;
    int a[n]={1,2, 3, 9, 7, 4, 8, 6, 10, 5};
    int j=0;
    for(int i=0;i<n;i++){
        int x=find_max_le(a,n,i);
        swap(a[x],a[i]);
        j++;
    }
    int c=0; // đếm số lượng chữ số lẻ
    for(int i=0;i<n;i++){
        if(a[i]%2==1) c++;
    }
    for(int i=n-1;i>=5;i--)
    {
        
        int x=find_max_chan(a,n,c);
        swap(a[x],a[i]);
        c++;
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}


-------------------------CACH 2--------------------------------------------------------------
 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Hàm so sánh để sắp xếp các số lẻ giảm dần
bool compare_odd(int a, int b){
    return a>b;
}

// Hàm so sánh để sắp xếp số lẻ tăng dần
bool compare_even(int a, int b){
    return a<b;
}

void sort_odd_even(vector<int> &arr)
{
    //Phân chia mảng thành hai phần chẵn và lẻ
    vector<int> odd, even;
    for(int num:arr){
        if(num%2==0){
            even.push_back(num);
        }else{
            odd.push_back(num);
        }
    }
    
    // Sắp xếp các phần tử trong mỗi phần tương ứng
    sort(odd.begin(), odd.end(), compare_odd);
    sort(even.begin(), even.end(), compare_even);
    
    // Gộp hai phần đã sắp xếp lại với nhau
    arr.clear();
    arr.insert(arr.end(), odd.begin(), odd.end());
    arr.insert(arr.end(), even.begin(), even.end());

}
int main()
{
    int n;
    vector<int> arr;
    cout<<"NHap so luong phan tu: ";
    cin>> n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    sort_odd_even(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
