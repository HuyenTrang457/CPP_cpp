 #include<vector>
 #include<iostream>
 using namespace std;
//---------Nhap xuat vector-----------
 int main(){
     vector<int> v;
     v.push_back(100); // thêm ptu vao vector
     v.push_back(200);
     cout<< v.size()<<endl; 
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     for(int x:v){
        cout<<x<<" ";

     }

 // ----------nhap mang vector------------------
   int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int tmp;
         cin>>tmp;
         v.push_back(tmp);
     }
     return 0;
 }
//-----duyet --Vector iterator---------------------
 vector<int> v={1,2,3,4,5};
     vector<int>::iterator it= v.begin();
     for(it=v.begin();it!= v.end();it++){
             cout<<*it <<" ";
 // C2
      for(vector<int>::iterator it=v.begin();it!= v.end();it++){
             cout<<*it <<" ";
     }
//--------Dung Auto duyet mang--------------------
vector<int> v={1,2,3,4,5};
     for(auto it=v.begin();it !=v.end();it++)
     {
         cout<<*it <<' ';
     }
 
///------SORT ----------------------------
//Tăng dần 
    sort(vec.begin(),vec.end());
// Giảm dần
    sort(vec.begin(), vec.end(), greater<int>());

//----------LẬT NGƯỢC VECTOR-----------------------
    reverse(vec.begin(), vec.end());
  // lật từ vị trí r đến l
reverse(vec.begin()+l, vec.begin()+l );
