#include <iostream>
using namespace std;

int main (){
    int n, i, t;
    cin >> n;
    for(i = 0; n > i; i++){
        cin >> t; 
        if(t > 1){
            if (t%2 == 1){
                t = (t / 2);
                cout << t + 1 << "\n";
            }else{
                t = t / 2;
                cout << t << "\n";
            }
        }else if(t == 1){
            t = 1;
            cout << t << "\n";
        }
    }
}