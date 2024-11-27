#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

int main(){
    int n, i, f1, f2, res;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> f1 >> f2;
        res = gcd(f1,f2);
        cout << res << "\n";
    }
    return 0;
}