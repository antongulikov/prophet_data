#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,four,seven; cin >> n; bool found = false;
    if (n == 4 || n == 7)
    {
        cout << n << endl;
        return 0;
    }
    for (four = 1; four <= n; four++)
    {
        for (seven = 1; seven <= n; seven++)
        if ((four * 4) + (seven * 7) == n)
        {
            found = true;
            break;
        }
        if (found) break;
    }
    string number;
    while (four--) number += '4';
    while (seven--) number += '7';
    (found) ? cout << number << endl : cout << -1 << endl;
    return 0;
}