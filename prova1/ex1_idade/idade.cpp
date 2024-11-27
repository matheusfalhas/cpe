#include <iostream>
using namespace std;

int main(){
    int i;
    
    // pede para digitar a idade
    cout << "Digite sua idade:\n";
    // le o numero digitado
    cin >> i;
    
    if(i > 65 || i == 16 || i == 17){
        cout << "ELEITOR: VOTO FACULTATIVO\n";
    }else if(i > 17 && i <= 65){
        cout << "ELEITOR: VOTO OBRIGATORIO\n";
    }else if(i < 16 && i >= 0){
        cout << "NÃO ELEITOR\n";
    }
    return 0;
}