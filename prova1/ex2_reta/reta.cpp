#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

// equacao da reta: y = a * x + b
// equacao a: a =(y2- y1)/(x2-x1)
// equacao b: b = y1 - a * x1 = y2 - a * x2
// a reta passa pelos pontos: P1 = (2, 3); P2 = (4, 0.5)
int main(){
    float x1, y1, x2, y2, x3, y3, a, b, d;
    
    // le os pontos
    cout << "Digite 6 pontos: \n";
    cin >> x1 >> y1 ;"\n";
    cin >> x2 >> y2 ;"\n";
    cin >> x3 >> y3 ;"\n";

    // calcula o a e b para a equacao da reta    
    a = ((y2 - y1) / (x2 - x1));
    b = (y1 - a * x1);

    // calcula o determinante da matriz dos pontos
    d = (((x1 * y2) + (y1 * x3) + (x2 * y3)) - ((y2 * x3) + (x1 * y3) + (y1 * x2)));

    // se o determinante for 0, faz parte da reta
    if(d == 0){
        cout << "y = " << fixed << setprecision(2) << a << "*x +" << fixed << setprecision(2) << b << endl;
        cout << " O PONTO (" << fixed << setprecision(2) << x3 << ", " << fixed << setprecision(2) << y3 << ")" << " PERTENCE A RETA" << endl; 
    }else{
        cout << "y = "<< fixed << setprecision(2) << a << "*x +" << fixed << setprecision(2) << b << endl;
        cout << " O PONTO (" << fixed << setprecision(2) << x3 << ", " << fixed << setprecision(2) << y3 << ")" << " NAO PERTENCE A RETA" << endl; 
        }
    return 0;
}
