#include <iostream>
 
int main()
{
 
      int n, reverse = 0, c, afterwards;
 
        std::cin >> n;
        afterwards = n;
 
        while (n != 0) {
            c = n % 10;
            reverse = reverse * 10 + c;
            n /= 10;
        }
        std::cout << reverse + afterwards;
}
