#include <iostream>
/*Дана сторона квадрата. Найти его периметр.*/
int main()
{
    {
        double a;
        std::cout << "Введите сторону квадрата: ";
        std::cin >> a;
        double perimeter = 4 * a;
        std::cout << "Периметр квадрата: " << perimeter << std::endl;
    }
    return 0;
}
