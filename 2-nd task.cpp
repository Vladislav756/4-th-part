#include <iostream>

//�������� ������� setValue(), ������� ����� ��������� �� ���� ����� ����� � ������ ��� �������� �� 1.
//�������� ���������, ������� ������ � ������������ �������� ������ �����, ����� ���������� setValue ��� ����� ����� � � ����� ���������� ������� ����� � �������

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

