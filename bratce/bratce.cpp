#include<iostream>
using namespace std;
int main()
{
    int n, reversedNumber = 0, remainder,n1;
 
 
    cin >> n;
    n1 = n;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    if (reversedNumber>n1)
    {
        cout << reversedNumber;
    }
    else
    {
        cout << n1;
    }
 
 
    return 0;
}
