#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<long long> v;
void brute(long long num)
{
	v.push_back(num);
	if (num > 1000000000)
		return;
	brute(num * 10 + 4);
	brute(num * 10 + 7);
}
int main()
{
	ios::sync_with_stdio(false);
	brute(0);
	sort(v.begin(), v.end());
	v.resize(unique(v.begin(), v.end()) - v.begin());
	int n;
	cin >> n;
	cout << lower_bound(v.begin(), v.end(), n) - v.begin() << endl;
	return 0;
}