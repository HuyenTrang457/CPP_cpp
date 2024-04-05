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
