#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

string s;
int k;
int cnt[26];

int main() {
    ios_base::sync_with_stdio(0);
    
    cin >> s >> k;
    
    for(int i = 0; i < 26; i++) {
        cnt[i] = 0;
    }
    
    for(int i = 0; i < s.length(); i++) {
        cnt[s[i] - 'a']++;
    }
    
    sort(cnt, cnt + 26);
    
    int ans = 26;
    
    for(int i = 0; i < 26; i++) {
        if (k >= cnt[i]) {
            k -= cnt[i];
            ans--;
        } else {
            break;
        }
    }
    
    cout << ans;
    
    return 0;
    
}