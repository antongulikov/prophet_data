#include <iostream>

using namespace std;

int main ()
{
    int n;

    cin >> n;

    int a, b;

    a = n / 36;

    n -= a * 36;

    if (n % 3 == 0)
        b = n / 3;
    else if (n % 3 == 1)
        b = n / 3;
    else
        b = n / 3 + 1;

    cout << a << " " << b << endl;

    return 0;
}
