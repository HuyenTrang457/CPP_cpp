
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


---- đọc file chưa biết trước số lượng
void read_file(FILE* filename, Array &arr)
{
    int i=0;
    while (fscanf(filename, "%d", &arr.data[i]) != EOF) {
        i++;
          }
        arr.n=i;
    
}
