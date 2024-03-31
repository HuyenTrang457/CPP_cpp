 #include<vector>
 #include<iostream>
 using namespace std;

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
     return 0;
 }
