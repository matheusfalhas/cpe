#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int i;
    float e, fat;
    fat = 1.00;
    // faz o 1/fatorial ate o 10 e a somatoria deles 
    for(i = 1; i <= 10 && i > 0 && fat > 0; i++){
        fat += (1/(fat * i)); // fat = fat + (1/fat * i)
    }
    e = fat;
    cout << "valor de e eh " << fixed << setprecision(4) << e << endl;
    return 0;
}