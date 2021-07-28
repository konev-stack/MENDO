#include <iostream>
using namespace std;
 
int main() {
 
    int number;
    int min, max;
    long sum = 0;
 
    cin >> min;
 
    cin >> max;
 
    for (number = min; number <= max; number++)
        if (number % 2 != 0)
            sum = sum + number;
 
    cout << sum;
 
    return 0;
 
}
