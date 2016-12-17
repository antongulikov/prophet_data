#include <iostream>
using namespace std;

int main() {
int t , add , counter=0 ;
cin >> t >> add;
int x[t];
cin >>x[0];
for(int i=0 ; i<t ; i++){
    cin >> x[i];
while (x[i]<x[i-1]){
    x[i]=x[i]+add;
    counter++;
}
    
}
cout << counter;
return 0;
}