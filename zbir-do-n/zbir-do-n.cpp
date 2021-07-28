#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int zbir=0;
 
    for (int i = 0; i <= n; i++)
    {
        zbir += i;
    }
    cout << zbir;
}
