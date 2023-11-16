//including Input/Output library
#include <iostream>

const short unsigned arraySize = 10;

//Declarartion BubbleSort Algorithm
void BubbleSort(int arr[], short unsigned arraySize);

//------------Main Interface-----------//
int main()
{
    //List of Unsorted Numbers
    int unSortedArray[arraySize] = { 54,12,50,71,23,19,11,10,22,13 };
    //before BubbleSort
    std::cout << "Before : ";
    for (auto x : unSortedArray)std::cout << x <<", ";
    //Implimenting BubbleSort on unSortedArray
    BubbleSort(unSortedArray, arraySize);
    //after Sorting
    std::cout << "\n\nAfter : ";
    for (auto z : unSortedArray)std::cout << z << ", ";
    std::cout << "\n";//adding line break
}

//Defining BubbleSort Algorithm
void BubbleSort(int arr[], short unsigned arraySize)
{
    //Nesting Outer Loop
    for (int i = 0; i < arraySize - 1; i++) {
        //Inner loop
        for (int j = 0; j < arraySize - i - 1; j++) {
            //checking if precceeding number > exceeding number
            if (arr[j] > arr[j + 1])
                //If true than swapping values
                std::swap(arr[j], arr[j + 1]);
        }//Of Inner Loop
    }//Of Outer Loop
}//Func Void Bubblesort