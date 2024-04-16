----------------------------------------------------------------------------------------------
//KIỂM TRA CHUỖI THUẬN NGHỊCH 

int kiem_tra_thuan_nghich(string word){
    int n=word.size();
    for(int i=0;i<n/2;i++){
        if(word[i]!=word[n-i-1]) return 0;
    }
    return 1;
}
 int main(){
     string s="IAzbbzAI   ocoS iIA ccAAAAAAcc izzbb   aoI iIiAWWAiIi ";
     stringstream ss(s);
     string word;
     string words="";
     while(ss>> word)
     {
         if(kiem_tra_thuan_nghich(word)){
             words+= word;
             words+=" ";
         }
     }
     cout<<words;
----------------------------------------------------------------------------------------------
// SẮP XẾP THEO ĐỘ BÀI --> CHỮ CÁI ĐẦU    

#include<iostream>
 #include<ctype.h>
 #include<algorithm>
 #include<vector>
#include <bits/stdc++.h> // thư viện của stringstream
 using namespace std;
 bool compare(string &a, string &b){
     if(a.length()!= b.length()) return a.length ()< b.length();
     
     else return a<b;
 }
 int main(){
     string s="nguyen thi huyn trang";
     vector<string> words;
     string word;
     stringstream ss(s);
     while(ss>>word){
         words.push_back(word);
     }
     sort(words.begin(),words.end(),compare);
     for(string x:words){
         cout<< x<<" ";
     }
     return 0;
 }



---------------------------------------------------------------------------------------------
#include <iostream>
#include<ctype.h>
#include<algorithm>
using namespace std;
void reserve_string(string &s);
void swap(string &a, string &b);
void upper(string &s);
void lower(string &s);
int sum_digit(string s);// tổng các chữ số trong string
bool nice_number(int n); // số đẹp là số có các chữ số cạnh nhau có hiệu <= 1
string insert_comma(long long int &n); // chèn dâu phẩy vào số tự nhiên
string sort_digit(long long int n);

int main()
{
    string s;
    cin>> s;
    cout<<s<<endl;
    /*reserve_string(s);
    cout<<s<<endl;
    upper(s);
    cout<<s<<endl;
    lower(s);
    cout<<s<<endl;
    
    int x= sum_alpha(s);
    cout<<x<<endl;
    int n;
    cout<<" Nhap n: "; cin>>n;
    if(nice_number(n)) cout<<"yes";
    else cout<<"no";
    */
    long long int n;
    cout<<"nhap n: "; cin>>n;
    string m= sort_digit(n);
    cout<<m;
    
    return 0;
}
----------------------------------------------
// xóa các phần tử trong 1 chuỗi từ một chuỗi cho trước
 string k="28tech";
    
    for(int i=0;i<k.size();i++){
        if(s.find(k[i])!= string::npos){
            int x=s.find(k[i]);
            s.erase(x,1);
        }
    }

--------------------------------------------------
// chỉnh sửa ngày tháng
string s;
    cin>> s;
    cout<<s<<endl;
    int c=0;
    int x=s.size();
    for(int i=0;i<x;i++){
        if(s[i]=='/'){
            if(c==1){
                s.insert(i-1,"0");
            }
            c=0;
            continue;
        }
        c++;
    }
    cout<<"ket qua: "<< s;
---------------------------------------------------------
void reserve_string(string &s)
{
    int n= s.size();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
}
void swap(string &a, string &b)
{
    string tmp= a;
    a=b;
    b= tmp;
}
void upper(string &s)
{
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
}
void lower(string &s)
{
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
int sum_digit(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) sum+= s[i] -'0';
    }
    return sum;
}
bool nice_number(int n)
{
    string s;
    s= to_string(n);
    for(int i=0;i<s.size()-1;i++){
        int re= abs(s[i]-'0'-(s[i+1]-'0'));
        if(re>1) return false; 
    }
    return true;
}

string insert_comma(long long int &n)
{
  
  string s=to_string(n);
    int c=0;
    for(int i=s.size()-1;i>=0;i--){
        c++;
        if((c==3)){
            s.insert(i,",");
            c=0;  
        }
    }
    return s;
}
string sort_digit(long long int n)
{
    string s= to_string(n);
    sort(s.begin(), s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s.erase(i,1);
            i--;
        }else break;
    }
    return s;
}
