#include <iostream>
using namespace std;
int main() {
    int step = 3;
    int n;
    cin >> n;
    int res = 1;
    int a = 0;
    for (int i = 1; i <= n; i++) {
        a += res;
        res += step;
 
 
    }
    cout << a;
 
}
