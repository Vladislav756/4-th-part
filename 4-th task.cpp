//�������� 2 ������������� ����������, ������ ���������� ������ ���� ����������� ����������, ������ �����������.
//��� ���������� ������������� ���������� �������� ���������.��� ����� ���������� �������� � ������� �� �������� � ����� � ������.

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

