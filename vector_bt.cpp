//-----------------EX1--------------------------------
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int op; cin>>op;
        if(op==1)
        {
            int tmp;
            cin>>tmp;
            vec.push_back(tmp);
        } else if(op==2){
            if(!vec.empty()){
                vec.pop_back();
            }
            
        }
    }
    if(vec.empty()){
        cout<<"EMPTY";
    }else{
        for(int x : vec){
            cout<<x<<endl;
        }
    }
    return 0;
}

-----------------EX2: ERASE - INSERT-------------------------------
    /*Thao tác 1 : Chèn phần tử vào vị trí bất kì trong vector.
Thao tác 2 : Xóa phần tử ở vị trí bất kì trong vector
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int m; cin>>m; //số lượng phần tử vecto
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        vec.push_back(tmp);
    }
    int n; cin>>n; // số thao tác sẽ thực hiện
    for(int i=0;i<n;i++){
        int op; cin>>op;
        if(op==1){
            int pos, val;
            cin>>pos>>val;
             vec.insert(vec.begin() + pos, val);
        }else if(op==2){
            if(!vec.empty())
            {int pos;
            cin>>pos;
            vec.erase(vec.begin()+pos);}
        }
    }
        if(vec.empty()){
            cout<<"EMPTY";
            
        }else{
            for(int x : vec){
                cout<<x<<" ";
            }
        }
    
    
    return 0;
}

----------------------EX3--SORT------------------------------
    
//Tăng dần 
    sort(vec.begin(),vec.end());
// Giảm dần
    sort(vec.begin(), vec.end(), greater<int>());
    
    return 0;
}
