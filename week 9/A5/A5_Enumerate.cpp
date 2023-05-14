//https://blog.csdn.net/weixin_34406796/article/details/93273549?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522168408080016800188581212%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=168408080016800188581212&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-1-93273549-null-null.142^v87^control_2,239^v2^insert_chatgpt&utm_term=C.%20Powers%20Of%20Two&spm=1018.2226.3001.4187

#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
int n, k;

int main() {
    cin >> n >> k;
    if(n < k) {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> vec(k, 1);
    n -= k;
    for(int i = 0; i < k; ++i) {
        while(vec[i] <= n) {
            n -= vec[i];
            vec[i] *= 2;
        }
    }
    if(n) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for(int i =  0; i < k; ++i) {
            cout << vec[i] << (i == k - 1 ? '\n' : ' ');
        }
    }
    return 0;
}