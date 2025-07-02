#include <iostream>
/*Вычислить значение логического выражения при следующих значениях логических
величин A, B и C: A = Истина, B = Ложь, C = Ложь:
а) A или B; б) A и B; в) B или C.*/
int main()
{
    {
        bool A = true;
        bool B = false;
        bool C = false;

        bool res_a = A || B;
        bool res_b = A && B;
        bool res_c = B || C;

        std::cout << "а) A или B: " << (res_a ? "Истина" : "Ложь") << std::endl;
        std::cout << "б) A и B: " << (res_b ? "Истина" : "Ложь") << std::endl;
        std::cout << "в) B или C: " << (res_c ? "Истина" : "Ложь") << std::endl;
    }
    return 0;
}

