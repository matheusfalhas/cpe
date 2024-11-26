#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int m, n;
    float kg;
    cin >> n;
    if ((1 <= n && n <= 1000)){
        for(m = 0; m < n; m++){
            cin >> kg;
            if(kg > 1){
                while(kg > 1){
                (kg / 2)
            }
            }else{
                cout << "1 dia"
            }
            cout << setprecision(2) << kg << " dias" << endl;
        }
    }else{
        cout << "Insira um numero valido\n";
        return 0;
    }

    return 0;
}