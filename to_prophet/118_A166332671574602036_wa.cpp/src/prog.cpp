#include <iostream>
#include <cstring>
using namespace std; 
#define lower(a) ((a >= 'A' && a <= 'Z') ? (a - 'A' + 'a') : a)
int main()
{
    char arr[128]; 
    cin >> arr; 
    int l = strlen(arr); 
    for (int i = 0; i < l; i++)
    {
        char x = lower(arr[i]); 
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
            continue; 
        cout << "." << x << endl; 
    }
    return 0; 
}