#include <iostream>
/*Дано трехзначное число. Найти число, полученное при прочтении его цифр справа налево.*/
int main()
{
    {
        int num;
        std::cout << "Введите трехзначное число: ";
        std::cin >> num;
        
        int a = num / 100;          
        int b = (num / 10) % 10;    
        int c = num % 10;           
        
        int reversed = c * 100 + b * 10 + a;
        std::cout << "Число справа налево: " << reversed << std::endl;
    }
    return 0;
}
