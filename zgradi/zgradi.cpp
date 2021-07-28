#include<iostream>
using namespace std;
int main()
{
    int buildings, floors[100000], totalfloorsmade=0, floorsmade, high;
    cin >> buildings;
    for (int i = 0; i < buildings; i++) {
 
        cin >> floors[i];
    }
 
    high = floors[0];
    for (int i = 0; i < buildings; i++) {
 
        if (high < floors[i])
            high = floors[i];
 
 
    }
 
    for (int i = 0; i < buildings; i++) {
 
        totalfloorsmade = totalfloorsmade + (high - floors[i]);
 
    }
 
 
    cout << totalfloorsmade;
 
 
 
}
