#include <iostream>
#include <cmath>
/*Даны катеты прямоугольного треугольника. Найти его гипотенузу.*/
int main()
{
    {
        double a, b;
        std::cout << "Введите первый катет: ";
        std::cin >> a;
        std::cout << "Введите второй катет: ";
        std::cin >> b;
        double c = std::sqrt(a * a + b * b);
        std::cout << "Гипотенуза: " << c << std::endl;
    }
    return 0;
}
