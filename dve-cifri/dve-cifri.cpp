#include <iostream>
using namespace std;
int main()
{
    int k;
    int n;
    cin >> n;
    cin >> k;
    int func= k / 10 % 10;
    int func1 = n / 10 % 10;
 
    cout << func+func1;
}
