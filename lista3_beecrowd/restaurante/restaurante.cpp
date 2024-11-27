#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int r, w, l, i, n, count;
    float d;
    count = 0;
    // faz o loop pra ler as variaveis n vezes
    while(cin>>r){
        cin >> w >> l;
        count++;
        // se o numero for valido, continua
        if ((r >= 1) && (r <= 1000)){
            d = sqrt(w*w+l*l);;
            if(r<(d/2.)){
                cout << "Pizza " << count << " does not fit on the table.\n";
            }else{
                cout << "Pizza " << count << " fits on the table.\n";
            }
        }else if(r == 0){
            break;
        }
    }
    return 0;
}