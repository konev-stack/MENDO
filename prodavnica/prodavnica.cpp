#include <iostream>
 
int main()
{
    int p, v, func, func2, func3;
    int pet = 0, dva = 0, eden = 0;
    std::cin >> p >> v;
    func = v - p;
    if (func%5>=0)
    {
        pet = func / 5;
    }
    func2 = func%5;
    if (func2 % 2 >= 0)
    {
        dva = func2 / 2;
    }
    func3 = func2%2;
    if (func3 % 1 >= 0)
    {
        eden = func3 / 1;
    }
 
    std::cout << pet+dva+eden;
 
     
}
