#include <iostream>
#include <iomanip>
/*Одна штука некоторого товара стоит 20,4 руб. Напечатать таблицу стоимости
2, 3, ..., 20 штук этого товара.*/
int main()
{
    {
        double price = 20.4;
        std::cout << "Количество\tСтоимость (руб.)" << std::endl;
        for (int quantity = 2; quantity <= 20; ++quantity)
        {
            double total = price * quantity;
            std::cout << std::setw(10) << quantity << "\t" << std::fixed << std::setprecision(2) << total << std::endl;
        }
    }
    return 0;
}
