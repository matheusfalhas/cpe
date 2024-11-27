#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int m, n, count;
    float kg;
    cin >> n;
    if ((1 <= n && n <= 1000)){
        for(m = 0; m < n; m++){
            cin >> kg;
            if(kg > 2){
                for(count = 0; kg > 1; count++){
                    kg = kg / 2;
                }
            cout << fixed << setprecision(2) << count << " dias\n";
            }else if (kg <= 2 && kg > 0){
                cout << "1 dias\n";
            }
        }
    }else{
        cout << "Insira um numero valido\n";
        return 0;
    }

    return 0;
}