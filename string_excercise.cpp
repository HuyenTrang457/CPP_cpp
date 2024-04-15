/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<ctype.h>
using namespace std;
void reserve_string(string &s);
void swap(string &a, string &b);
void upper(string &s);
void lower(string &s);
int sum_digit(string s);// tổng các chữ số trong string
bool nice_number(int n); // số đẹp là số có các chữ số cạnh nhau có hiệu <= 1

int main()
{
    string s;
    cin>> s;
    cout<<s<<endl;
    reserve_string(s);
    cout<<s<<endl;
    upper(s);
    cout<<s<<endl;
    lower(s);
        cout<<s<<endl;

    return 0;
}
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
