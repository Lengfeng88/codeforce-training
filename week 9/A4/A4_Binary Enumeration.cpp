//https://blog.csdn.net/sugarbliss/article/details/85951942/?ops_request_misc=&request_id=&biz_id=102&utm_term=Petr%20and%20a%20Combination%20Lock&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-3-85951942.142^v87^control_2,239^v2^insert_chatgpt&spm=1018.2226.3001.4187

#include<bits/stdc++.h>
using namespace std;
const int maxn=4005,inf=1e8;
int a[maxn], n;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < (1 << n); i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            if(i & (1 << j)) sum += a[j];
            else sum -= a[j];
        }
        if( !sum || !(sum % 360)) return puts("YES"),0;
    }
    puts("NO");
}