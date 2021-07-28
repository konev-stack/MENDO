#include <iostream>
using namespace std;
int main()
{
    int a;
    int total;
    for (int i = 0; i < 1; i++) {
        cin >> a;
        total = a * a;
        cout << total <<endl;
        total = a * total;
    }
    cout << total <<endl;
    return 0;
}
