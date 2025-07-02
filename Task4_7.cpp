#include <iostream>
/*Определить максимальное и минимальное значения из двух различных вещественных чисел.*/
int main()
{
    {
        double x, y;
        std::cout << "Введите два различных вещественных числа: ";
        std::cin >> x >> y;

        double max_val = (x > y) ? x : y;
        double min_val = (x < y) ? x : y;

        std::cout << "Максимальное значение: " << max_val << std::endl;
        std::cout << "Минимальное значение: " << min_val << std::endl;
    }
    return 0;
}
