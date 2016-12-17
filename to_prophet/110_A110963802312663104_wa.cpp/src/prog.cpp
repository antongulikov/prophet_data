#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();
  int k = 0;
  for (int i = 0; i < len; i++)
    k += (s[i] == '4' || s[i] == '7');
  while (k > 0)
  {
    if (k % 10 != 4 && k % 10 != 7)
    {
      cout << "NO";
      return 0;
    }
    k /= 10;
  }    
  cout << "YES";
}