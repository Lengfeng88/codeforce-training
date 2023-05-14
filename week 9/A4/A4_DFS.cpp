#include<bits/stdc++.h>
using namespace std;
const int maxn=4005,inf=1e8;
int a[maxn], n;
bool flag;
void dfs(int x, int sum)
{
    if(x == n)
    {
        if(!(sum % 360)) flag = true;
        return;
    }
    dfs(x + 1, sum + a[x]);
    dfs(x + 1, sum - a[x]);
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    flag = false; dfs(0,0);
    if(flag) puts("YES");
    else puts("NO");
    return 0;
}