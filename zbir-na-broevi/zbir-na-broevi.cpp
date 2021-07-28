#include<iostream>
using namespace std;
 
int main()
{
    int n, n1;
    int sum=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> n1;
        sum += n1;
 
    }
    cout << sum;
}
