#include <iostream>
#include <cmath>

using namespace std;

void outArray(double *array, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i < (size - 1))
        {
            cout << *(array + i) << ", ";
        }
        else
        {
            cout << *(array + i);
        }
    }
    cout << "]\n";
}

void sortArray(double *arr, double *sort, int size)
{
    // double sortArr[size];
    double max = 0.0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (*(arr + j) > max)
            {
                max = *(arr + j);
                count = j;
            }
        }
        float temp = round(max * 10) / 10;
        *(sort + i) = temp;
        *(arr + count) = 0.0;
        max = 0;
    }

    // return sort;
}
int main()
{

    long sizeArr = 0;
    cout << "Ввести размер массива: ";
    cin >> sizeArr;
    double arrStart[sizeArr];
    double copyArrStart[sizeArr];
    double sortArr[sizeArr];

    cout << "Ввести данные массива: ";
    for (int i = 0; i < sizeArr; i++)
    {
        cout << "-> ";
        cin >> arrStart[i];
        copyArrStart[i] = arrStart[i];
    }
    double *ptrSort{arrStart};
    double *ptrSortArr{sortArr};
    double *ptr{copyArrStart};

    sortArray(ptrSort, ptrSortArr, sizeArr);

    cout << "Исходный массив: \n";
    outArray(ptr, sizeArr);
    cout << "Отсортированный массив: \n";
    outArray(ptrSortArr, sizeArr);
}