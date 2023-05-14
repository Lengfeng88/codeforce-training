//https://blog.csdn.net/moasad/article/details/105122445?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522168408080016800188581212%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=168408080016800188581212&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-2-105122445-null-null.142^v87^control_2,239^v2^insert_chatgpt&utm_term=C.%20Powers%20Of%20Two&spm=1018.2226.3001.4187

#include <bits/stdc++.h>
using namespace std;
#define NewNode (TreeNode *)malloc(sizeof(TreeNode))
#define Mem(a,b) memset(a,b,sizeof(a))
const int N = 3e5 + 5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-10;
const unsigned long long mod = 998244353;
const int II = 3.1415926535;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n,k,q;
    cin >> n >> k;
    q = n;
    ll arr[50] = {0},m = 0,num1 = 0;//arr?????,num1?????1???
    while(q != 0)
    {
        arr[m++] = q % 2;
        if(q % 2 == 1)
            num1++;
        q /= 2;
    }
    if(k > n || k < num1)
        cout << "NO" << endl;
    else
    {
        int sum = num1;//???num1???
        for(int i = m-1;i >= 0;i--)
        {
            if(sum < k && arr[i] != 0)
            {
                while(arr[i])
                {
                    arr[i]--;
                    arr[i-1] += 2;//?:??8?????4
                    sum += 1;//????
                    if(sum == k)
                        break;
                }
            }
            if(sum == k)
                break;
        }
        cout << "YES" << endl;
        for(int i = m-1;i >= 0;i--)
        {
            if(arr[i] != 0)
            {
                while(arr[i]--)
                {
                    ll o = 1,k = i;
                    while(k)//???????pow,?????,?:pow(2,29) ?????536870912 ,?????????5.36871e+008 (????????)
                    {
                        o *= 2;
                        k--;
                    }
                    cout << o << " ";
                }
            }
        }
        cout << endl;
    }
}
