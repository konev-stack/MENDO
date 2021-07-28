#include <iostream>
 
using namespace std;
 
int main()
{
    int teamInGame;
    cin >> teamInGame;
    int pts;
    int num = 0;
    int pWin = 3;
    int win;
    int draw;
    int lose;
    int pDraw = 1;
    for (int i = 0; i < teamInGame; i++) {
        cin >> win >> draw >> lose;
        pts = (win * pWin) + (draw * pDraw) + 0;
         
        if(pts > num)
        {
            num = pts;
        }
        
        }
    cout << num;
    return 0;
        
         
    }
