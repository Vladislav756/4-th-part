//�������� ������ �� ���� ���������, � ����� ��������� �� ������ ������� � �������.
//������������������ ��� �������� ������� ���������� �������, ��������� ���������

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
