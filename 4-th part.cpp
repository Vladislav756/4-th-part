#include <iostream>
#include <stdlib.h>

void MemorySet(double *&parr, int arr_length)
{
    parr = new double[arr_length];
}

void FillArr(double *parr, int &arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        parr[i] = i + rand();
    }
}

void ArrCout(double *parr, int &arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        std::cout << parr[i] << "\n";
    }
}

void ArrMemoryDelete(double *&parr)
{
    delete[] parr;
}


int main()
{
    const int SIZE = 1;

    double arr[SIZE]{};

    double* parr = arr;

    bool new_array;

    do 
    {

        std::cout << "Insert array length \n";

        int arr_length = 0;

        std::cin >> arr_length; 

        MemorySet(*&parr, arr_length);

        FillArr(*&parr, arr_length);

        ArrCout(*&parr, arr_length);

        ArrMemoryDelete(parr);
        
        std::cout << "Try new array? 1 - yes, 0 - no \n";

        std::cin >> new_array;
    
    } 
    while (new_array != 0);

    return 0;
}
