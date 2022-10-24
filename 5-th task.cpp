//Создайте функцию swap(), которая на вход получает 2 числа и меняет их значения местами. Числа должны передаваться по указателю

#include <iostream>

void swap(int*& first_number, int*& second_number)
{
    int *tmp = second_number;

    second_number = first_number;

    first_number = tmp;
}


int main()
{
    std::cout << "This program swaps 2 numbers \n";

    std::cout << "Insert two numbers \n";

    int first_number = 0;

    int second_number = 0;

    std::cin >> first_number >> second_number;

    int *pFirst = &first_number;

    int *pSecond = &second_number;

    swap(*&pFirst, *&pSecond);
        
    std::cout << *pFirst << "\n" << *pSecond << "\n";

    return 0;
}
