#include <iostream>

const int arraySize = 30;
//define sorting array
void SelectionSort(int* arr,int lenghtOfArray);

int main()
{
    //random unsorted numbers
    int array[arraySize] = {
    35, 17, 92, 48, 73, 56, 24, 81, 62, 10,
    5,  39, 67, 28, 53, 46, 89, 14, 70, 31,
    98, 42, 77, 20, 60, 13, 84, 50, 37, 78};


    //printing array elements before Sorting 
    std::cout<<"Before : ";
    for(auto x : array){std::cout<< x<<", ";}

    //adding line break on console
    std::cout<<std::endl;

    //getting the lenght of the array
    int lenghtOfArray = sizeof(array)/sizeof(array[0]);
    //Invoking sorting algorithms
    SelectionSort(array,lenghtOfArray);

    //printing array elements after Sorting
    std::cout<<"After : ";
    for(auto x : array){std::cout<< x<<", ";}
} 


//define sorting array
void SelectionSort(int* arr, int lenghtOfArray)
{
  for(int i = 0; i<lenghtOfArray-1; i++ )
  {
    for (int j = i+1; j <lenghtOfArray; j++)
    {
        if (arr[i]>arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
  }
}

