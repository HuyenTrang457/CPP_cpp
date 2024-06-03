
#include <bits/stdc++.h>
using namespace std;
vector<int> ke[101];
int a[101][101];
bool visited[101]={false};
int n,m;

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
