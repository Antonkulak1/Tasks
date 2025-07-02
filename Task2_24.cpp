#include <iostream>
/*Из трехзначного числа x вычли его последнюю цифру. Когда результат разделили на 10,
а к частному слева приписали последнюю цифру числа x, то получилось число 237. Найти число x.*/
int main()
{
    {
        int result = 237;
        
        for (int x = 100; x <= 999; x++)
        {
            int a = x / 100;
            int b = (x / 10) % 10;
            int c = x % 10;
            
            int without_last = x - c;
            int divided = without_last / 10;
            int formed = c * 100 + divided;
            
            if (formed == 237)
            {
                std::cout << "Искомое число x: " << x << std::endl;
                break;
            }
        }
    }
    return 0;
}
