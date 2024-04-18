transform(s.begin(),s.end(),s.end(), ::tolower);

for( char &x:s) x= tolower(x);

n=1234
s= ntoi (n) // string to integer
n= stoll (s)  // string to long long
reverse( s.begin(), s.end()); // lật ngược sâu, áp dụng cho cả mảng và vector
s.find(k[i])!= string::npos // tìm kiếm
-------------------
  string s; 
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>> word)
    {
        cout<<word<<endl;
    }
