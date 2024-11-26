#include <iostream>
using namespace std;

// calcula o fatorial de um numero
int main () {
    int n, i, fat;
    cout << "Digite  um numero inteiro positivo" << endl;    
    cin >> n;

    fat = 1;
    for (i = 2; n >= i; i++){
        fat *= i; // fat = fat * i
    }
    cout << "O fatorial de " << n << " e igual a " << fat << endl;
    return 0;    
}