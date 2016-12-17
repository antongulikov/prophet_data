#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    int dif=0;

    cin >> str1 >> str2;

    for(int i=0; i<str2.size(); i++)
    {
        if(str1[i] >= 'a')
            if(str2[i] <= 'Z')
                str2[i] += 32;
        if(str1[i] <= 'Z')
            if(str2[i] >= 'a')
                str2[i] -= 32;
        if(str1[i] > str2[i])
            dif++;
        if(str1[i] < str2[i])
            dif--;
    }

    if(dif < 0)
        cout << -1 << endl;
    else if(dif > 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
