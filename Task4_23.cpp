#include <iostream>
/*Дано двузначное число. Определить:
а) какая из его цифр больше: первая или вторая;
б) одинаковы ли его цифры.*/
int main()
{
    {
        int num;
        std::cout << "Введите двузначное число: ";
        std::cin >> num;

        int first_digit = num / 10;
        int second_digit = num % 10;

        if (first_digit > second_digit)
            std::cout << "Первая цифра больше второй." << std::endl;
        else if (first_digit < second_digit)
            std::cout << "Вторая цифра больше первой." << std::endl;
        else
            std::cout << "Цифры одинаковы." << std::endl;

        // Для пункта б):
        if (first_digit == second_digit)
            std::cout << "Цифры одинаковы (пункт б)." << std::endl;
        else
            std::cout << "Цифры различны (пункт б)." << std::endl;
    }
    return 0;
}
