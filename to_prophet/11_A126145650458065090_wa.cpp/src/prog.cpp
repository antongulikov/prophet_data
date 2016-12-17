#include <iostream>

using namespace std;

int main(){
    unsigned int mas[2000];
    for (int i = 0; i < 2000; i++){
        mas[i] = 0;
    }
    unsigned int n,d;
    cin >> n >> d;

    for (int i = 0; i < n; i++){
        cin >> mas[i];
    }
    int cnt =0 ;
    for (int i = 1; i < n; i++){
        if (mas[i-1]>mas[i]){
            cnt += (mas[i-1] - mas[i]) / d;
            mas[i]=((mas[i-1] - mas[i]) / d) * d + mas[i];            
        }
        while (mas[i] <= mas [i-1]){
                mas[i] +=d;
                cnt++;
                cout <<"!";
        }
    }
    cout << cnt;
    return 0;
}
