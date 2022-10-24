//Создайте массив из пяти элементов, а также указатель на первый элемент в массиве.
//Проинициализируйте все элементы массива рандомными числами, используя указатель

#include <iostream>

int main()
{
    const int ARR_LENGTH = 5;

    int arr[ARR_LENGTH]{};

    int *pArr = arr;

    for (int i = 0; i < ARR_LENGTH; i++)
    {
        pArr [i] = rand();

        std::cout << pArr[i] << "\n";
    }

    return 0;
}
