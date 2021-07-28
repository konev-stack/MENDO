#include <iostream>
using namespace std;
 
int main()
{
    int n, n1;
    cin >> n;
    cin >> n1;
 
    int zbir = n + n1;
    int razlika = n - n1;
    int proizvod = n * n1;
    int kolicnik = n / n1;
 
    cout << zbir << " " << razlika << " " << proizvod << " " << kolicnik;
 
 
    return 0;
}
