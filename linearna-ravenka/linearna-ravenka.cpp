#include <iostream>
using namespace std;
 
int main() {
    int a;
    int b;
    int x;
 
 
 
 
    cin >> a;
 
 
    cin >> b;
 
 
    if (a == 0 & &b == 0)
 
    {
 
        cout << "ima beskonecno resenija";
 
 
    }
 
    else if (a == 0 & &b!= 0)
 
    {
 
        cout << "nema resenie";
 
 
    }
 
    else
 
    {
 
        x = -b / a;
 
        cout <<  x << endl;
 
    }
 
}
