#include <iostream>


void MemorySet(double *parr, int arr_length)
{
    double *parr = new double[arr_length];
}

void FillArr(double *parr, int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        parr[i] = i + rand();
    }
}

void ArrCout(double *parr, int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        std::cout << parr[i] << "\n";
    }
}

void ArrMemoryDelete(double *parr)
{
    delete[] parr;
}


int main()
{
    double* parr;

    std::cout << "Insert array length \n";

    int arr_length = 0;
     
    std::cin >> arr_length;

    MemorySet(parr, arr_length);

    FillArr(parr, arr_length);

    ArrCout(parr, arr_length);

    ArrMemoryDelete(parr);
    
    return 0;
}