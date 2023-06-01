#include <cstdio>
#include <iostream>
#include <set>
#define ll long long
using namespace std;
int w, h, n;
multiset <int> wpos, hpos, wlen, hlen;
multiset <int> :: iterator it, it1, it2;
 
int main()
{
    char s[2];
    int pos;
    scanf("%d %d %d", &w, &h, &n);
    wpos.insert(0);
    wpos.insert(w);
    hpos.insert(0);
    hpos.insert(h);
    wlen.insert(w);
    hlen.insert(h);
    while(n --)
    {
        scanf("%s %d", s, &pos);
        if(s[0] == 'H')
        {
            hpos.insert(pos);
            it = hpos.find(pos);
            it1 = it2 = it;
            it1 --;
            it2 ++;
            hlen.erase(hlen.find(*it2 - *it1));
            hlen.insert(*it2 - *it);
            hlen.insert(*it - *it1);
        }
        else
        {
            wpos.insert(pos);
            it = wpos.find(pos);
            it1 = it2 = it;
            it1 --;
            it2 ++;
            wlen.erase(wlen.find(*it2 - *it1));
            wlen.insert(*it2 - *it);
            wlen.insert(*it - *it1);   
        }
        it1 = wlen.end();
        it2 = hlen.end();
        ll a = *(--it1);
        ll b = *(--it2); 
        cout << a * b * 1ll << endl;
    }
}