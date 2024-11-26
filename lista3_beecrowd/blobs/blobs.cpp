#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int m, n;
    float kg;
    cout << "numero de casos de teste:\n";
    cin >> n;
    if ((1 <= n && n <= 1000)){
        for(m = 0; m < n; m++){
            cout << "comida blobs:\n";
            cin >> kg;
            if(kg > 1){
                while(kg > 1){
                (kg / 2);
                }
            }else if (n <= 1 && n > 0){
                cout << "1 dia\n";
            }
            cout << setprecision(2) << kg << " dias" << endl;
        }
    }else{
        cout << "Insira um numero valido\n";
        return 0;
    }

    return 0;
}