//Создайте 2 целочисленных переменных, первая переменная должна быть элоцирована статически, вторая динамически.
//Для статически элоцированной переменной создайте указатель.Для обеих переменных выведите в консоль их значения и адрес в памяти.

#include <iostream>

int main()
{
    int static_variable = 0;

    int *dynamic_variable = new int (20);

    int *pStatic = &static_variable;

    int* pDynamic = dynamic_variable;

    *pStatic = *pDynamic;

    return 0;
}

