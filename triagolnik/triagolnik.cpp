#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b > c && a + c > c && b + c > a)
    {
        cout << "DA";
    }
    else
    {
        cout << "NE";
    }
}
