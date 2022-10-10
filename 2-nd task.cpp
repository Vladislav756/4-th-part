#include <iostream>

//Напишите функцию setValue(), которая будет принимать на вход целое число и менять его значение на 1.
//Напишите программу, которая просит у пользователя написать ввести число, после вызывается setValue для этого числа и в конце необходимо вывести число в консоль

void setValue(int *pa)

{
    (*pa)++;
}




int main()
{
    int a;

    std::cout << "Insert value, and it will be increased by 1 \n";

    std::cin >> a;

    setValue(&a);

    std::cout << a << "\n";
}

