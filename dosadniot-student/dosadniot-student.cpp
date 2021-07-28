#include <iostream>
using namespace std;
 
int main() {
    int n, i = 0, t2 = 0, nextTerm = 0;
    cin >> n;
 
    while(i < n)
    {
        i++;
        t2++;
        i += t2;
    }
    cout << t2;
    return 0;
}
