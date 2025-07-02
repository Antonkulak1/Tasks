#include <iostream>
/*Известны оценки двух учеников по четырем предметам.
Определить сумму оценок каждого ученика.*/
int main()
{
    {
        int scores1[4], scores2[4];
        std::cout << "Введите оценки первого ученика по 4 предметам: ";
        for (int i = 0; i < 4; ++i)
            std::cin >> scores1[i];

        std::cout << "Введите оценки второго ученика по 4 предметам: ";
        for (int i = 0; i < 4; ++i)
            std::cin >> scores2[i];

        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 4; ++i)
        {
            sum1 += scores1[i];
            sum2 += scores2[i];
        }

        std::cout << "Сумма оценок первого ученика: " << sum1 << std::endl;
        std::cout << "Сумма оценок второго ученика: " << sum2 << std::endl;
    }
    return 0;
}
