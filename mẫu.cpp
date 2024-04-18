
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s;
    string line;
    while (getline(fin, s)) {
        fout << s << endl;
    }

  
    fin.close();
    fout.close();
    return 0;
}
