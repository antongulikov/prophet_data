#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<iomanip>

using namespace std;

int main(){
    int n , k , temp;
    int ans = 0;
    vector<int> vec;
    cin >> n >> k;
    for (int i = 0 ; i < n ; i++){
	 cin >> temp;
	 vec.push_back(temp);
    }
    sort(vec.begin() , vec.end());
    reverse(vec.begin() , vec.end());

    for (int j = 0 ; j < vec.size() ; j++){
	 ans = j;
	 if (vec[j] == 0)	break;
	 if (vec[j] < vec[j - 1] && j >= k)  break;
	 ans = j + 1;
    }
    cout << ans << endl;
    return 0;
}
