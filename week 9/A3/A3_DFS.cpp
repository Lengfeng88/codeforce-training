#include<iostream>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<string>
#define LL long long
#define INF 0x7fffffff
 
//freopen("E:\\in.txt","r",stdin);
 
using namespace std;
 
int ans,n;
 
void dfs(int t,int k){
    if(t>=n) return;
    if(t<n) ans++;
    if(k<1000000000) dfs(k*4+t,k*10);
    if(k<1000000000) dfs(k*7+t,k*10);
}
 
int main(){
    while(cin>>n){
        ans=1;
        dfs(4,10);dfs(7,10);
        cout<<ans<<endl;
    }
    return 0;
}