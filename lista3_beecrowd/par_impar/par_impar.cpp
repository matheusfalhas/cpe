#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main (){
    int n, a, b, i, count = 1;
    string nome1, nome2;
    while(cin >> n){
        if(n == 0)  break;
        cin >> nome1 >> nome2;
        cout << "Teste " << count << "\n";
        for(i = 0; i < n; i++){
            cin >> a >> b;
            if(((a+b)%2) == 0){
                cout << nome1 << "\n"; 
            }else{
                cout << nome2 << "\n";
            }
        }
        count++;
    }
}