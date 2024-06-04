
#include <bits/stdc++.h>
using namespace std;
vector<int> ke[101];
int a[101][101];
bool visited[101]={false};
int n,m;
vector<pair<int,int>> dscanh;
void DFS1(int u){
   cout<<u<<" ";
   visited[u]= true;
   for(int v:ke[u]){
      if(!visited[v]) DFS1(v);
      
   }
}

void DFS2(int u)
{
   cout<<u<<" ";
   visited[u]= true;
   for(int i=1;i<=n;i++){
      if(a[u][i]==1){
         if(!visited[i]) DFS2(i);
      }
   }
}
void DFS3(int u)
{
   cout<<u<<" ";
   visited[u]= true;
   for(auto it:dscanh){
      if(it.first==u){
         if(!visited[it.second]) DFS3(it.second);
      }
      if(it.second==u){
         if(!visited[it.first]) DFS3(it.first);
      }
   }
   
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
       int x,y; cin>>x>>y;
       ke[x].push_back(y);
       ke[y].push_back(x);
       
    }
   for(int i=1;i<=n;i++){
      sort(ke[i].begin(),ke[i].end());
      cout<<i<<": ";
      for(int x:ke[i]) cout<<x<< " ";
      cout<<endl;
   }
   DFS1(1);
    return 0;
}
