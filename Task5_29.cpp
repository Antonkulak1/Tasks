#include <iostream>
/*Найти:
а) среднее арифметическое всех целых чисел от 1 до 1000;
б) среднее арифметическое всех целых чисел от 100 до b (b >= 100);
в) среднее арифметическое всех целых чисел от a до 200 (a <= 200);
г) среднее арифметическое всех целых чисел от a до b (b >= a).*/
int main()
{
    {
        // а)
        int start_a = 1, end_a = 1000;
        double sum_a = 0;
        for (int i = start_a; i <= end_a; ++i)
            sum_a += i;
        double avg_a = sum_a / (end_a - start_a + 1);
        std::cout << "а) Среднее арифметическое от 1 до 1000: " << avg_a << std::endl;

        // б)
        int b;
        std::cout << "Введите b (b >= 100): ";
        std::cin >> b;
        if (b < 100)
        {
            std::cout << "b должно быть >= 100!" << std::endl;
        }
        else
        {
            double sum_b = 0;
            for (int i = 100; i <= b; ++i)
                sum_b += i;
            double avg_b = sum_b / (b - 100 + 1);
            std::cout << "б) Среднее арифметическое от 100 до " << b << ": " << avg_b << std::endl;
        }

        // в)
        int a;
        std::cout << "Введите a (a <= 200): ";
        std::cin >> a;
        if (a > 200)
        {
            std::cout << "a должно быть <= 200!" << std::endl;
        }
        else
        {
            double sum_v = 0;
            for (int i = a; i <= 200; ++i)
                sum_v += i;
            double avg_v = sum_v / (200 - a + 1);
            std::cout << "в) Среднее арифметическое от " << a << " до 200: " << avg_v << std::endl;
        }

        // г)
        int a_g, b_g;
        std::cout << "Введите a и b (b >= a): ";
        std::cin >> a_g >> b_g;
        if (b_g < a_g)
        {
            std::cout << "b должно быть >= a!" << std::endl;
        }
        else
        {
            double sum_g = 0;
            for (int i = a_g; i <= b_g; ++i)
                sum_g += i;
            double avg_g = sum_g / (b_g - a_g + 1);
            std::cout << "г) Среднее арифметическое от " << a_g << " до " << b_g << ": " << avg_g << std::endl;
        }
    }
    return 0;
}
