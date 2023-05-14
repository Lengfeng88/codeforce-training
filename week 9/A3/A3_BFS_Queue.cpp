
//https://blog.csdn.net/u014800748/article/details/45057755?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522168407829416800215074373%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=168407829416800215074373&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-6-45057755-null-null.142^v87^control_2,239^v2^insert_chatgpt&utm_term=B.%20Tavas%20and%20SaDDas&spm=1018.2226.3001.4187

#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<deque>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<functional>
using namespace std;
 
#define INF 100000000
#define For(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
const int N = 1000000000 + 5;
set<ll>a;
 
void init()
{
	int cnt = 1;
	queue<ll>q;
	q.push(4); q.push(7);
	while (!q.empty())
	{
		ll u = q.front(); q.pop();
		if (u > 1000000000)break;
		a.insert(u);
		ll u1 = u * 10 + 4, u2 = u * 10 + 7;
		q.push(u1);
		q.push(u2);
	}
}
int main()
{
	//freopen("t.txt", "r", stdin);
	ll n;
	init();
	while (~scanf("%I64d", &n))
	{
		set<ll>::iterator  it;
		it = a.find(n);
		cout << distance(a.begin(), it) + 1 << endl;
	}
	return 0;
}
