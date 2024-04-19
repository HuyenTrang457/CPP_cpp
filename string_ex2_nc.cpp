//26,27

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


--------------------------------------------------------------------------
 /* Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất 
 và lớn nhất có m chữ số và tổng chữ số bằng s.
*/
 #include<iostream>
 #include<ctype.h>
 #include<algorithm>
 #include<vector>
#include <bits/stdc++.h>
#include<sstream>
using namespace std;
bool compare(string &a, string &b){
    return a>b;
}
int sum(int n) // hàm tính tổng chữ số của n
{
    string x= to_string(n);
    int sum=0;
    for(int i=0;i<x.size();i++){
        sum=sum+ x[i]-'0';
    }
    return sum;
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s1;
    string s2;
    int p;
    int n;
    fin>>n>>p;
    //getline(fin, s1);
    string strbegin="1"; // số nhỏ nhất đầu tiên có n chữ số
    for(int i=1;i<n;i++){
        strbegin+="0";
    }
    int ibegin= stoi(strbegin);
    string strend="";
    for(int i=0;i<n;i++){ // số lớn nhất có n chữ số
        strend+="9";
    }
    int iend= stoi(strend);
    int s=0;
     for(int i=ibegin;i<=iend;i++){
         s=sum(i);
         if(s==p){
             cout<<i<<endl;
             break;
         }
     }
     for(int i=iend;i>=ibegin;i--){
         s=sum(i);
         if(s==p){
             cout<<i;
             break;
         }
     }
    
    fin.close();
    fout.close();
    return 0;
}


--------------------------------------------------
 /*
 Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp 
 chứa các kí tự giống nhau dài nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.
 */
 #include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool compare(string &a, string &b){
    if(a.length()!=b.length()) return a.length()<b.length();
    else return a<b;
}
int sum(int n) // hàm tính tổng chữ số của n
{
    string x= to_string(n);
    int sum=0;
    for(int i=0;i<x.size();i++){
        sum=sum+ x[i]-'0';
    }
    return sum;
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s1;
    string s2;
    int p;
    int n;
    getline(fin, s1);
    
    set<string> se;
   for(int i=0;i<s1.size();i++){
    string current_str = s1.substr(i,1);  // Extract single character
       string w=current_str;     // string để lưu 1 từ có các chữ giống nhau : aa, zz
       for(int j=i+1;j<s1.size();j++){
           if(s1[j]==current_str[0]){
               w+= s1[j];
           }
           else if(s1[j]!=current_str[0]&&w.size()>1){
               se.insert(w);  // lưu từ tìm được vào set 
               break;
           }
       }
   }
    for(string x:se) cout<<x<<" ";
    //aabb
    
    fin.close();
    fout.close();
    return 0;
}
