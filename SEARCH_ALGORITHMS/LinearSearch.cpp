#include <iostream>
//declaring linearSearch algorithm
int linearSearch(unsigned* array, unsigned size, int key);

int main()
{
    unsigned arr[10] = { 2,43,34,35,354,44,32,2,23,4 };
    std::cout << "-Key is at index -->>  " << linearSearch(arr, 10, 35);
}

int linearSearch(unsigned* array, unsigned size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key) return i;
    }
    return -1;
}