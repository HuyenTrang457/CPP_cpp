//Bài 18. Tạo email và mật khẩu-------------------------------------------------------------
 #include<ctype.h>
 #include<algorithm>
 #include<vector>
#include <bits/stdc++.h>
using namespace std;


int main(){
    
   int n; cin>>n;
   cin.ignore();
   for(int i=0;i<n;i++){
       string s; getline(cin,s);
       vector<string> vec;
       for(char &x:s){
           x= tolower(x);
       }
       string word;
       stringstream ss(s);
       while(ss>>word){
           vec.push_back(word);
       }
       int n=vec.size();
       string email = vec[n-2];
       for(int i=0;i<n-2;i++){
           email+= vec[i][0];
       }
       email+="@xyz.edu.vn";
       cout<<"email: "<<email<<endl;
       string pass;
       for(char x:vec[n-1]){
           if(x!='/'){
               pass+=x;
           }
       }
       cout<<"pass: "<<pass<<endl;
   }
    return 0;
}
