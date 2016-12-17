#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <list>
#include <set>
#include <climits>
#include <map>
#include <stack>
#include <queue>
#include <complex>
#include <cmath>
#include <sstream>
#include <deque>
#include <utility>
#include <bitset>
#include <ext/hash_set>
#include <ext/hash_map> 
using namespace std;
using namespace __gnu_cxx;

char arr  [] = { '6', '7', '8', '9', 'T', 'J', 'Q', 'K' , 'A' } ;
char arr1 [] = {'S', 'H', 'D' , 'C'} ;

int main (){
    char a ;
    int idxs1 = 0, idxs2 = 0  , T1 , T2;
    string s1 , s2 ;
    cin>>a>>s1>>s2;
        for (int j = 0 ; j < 9 ; j++){
            if (arr[j] == s1[0])idxs1=j;
            if (arr[j] == s2[0])idxs2=j;
            }
    
      for (int j = 0 ; j < 4 ; j++){
            if (arr1[j] == s1[0])T1=j;
            if (arr1[j] == s2[0])T2=j;
            }
     if ((s1[1] == a && s2[1] != a))cout<<"YES\n";
else if (idxs1 > idxs2  &&( (s1[1] != a && s2[1] != a) || (s1[1] == a && s2[1] == a) ))cout<<"YES\n";
else if ((T1 > T2) || (T1 == T2 && idxs1 > idxs2))cout<<"YES\n";   
    else cout<< "NO\n" ;
    }
