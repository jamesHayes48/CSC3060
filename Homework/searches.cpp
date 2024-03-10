#include <iostream>

using namespace std;

int binarySearch(const int array[], int numElems, int value)
{
    int first = 0;                           // First array element
    int last = numElems - 1;               // Last array element
    int middle;                              // Midpoint of search
    int position = -1;                      // Position of search value
    bool found = false;                      // Flag
    while (!found && first <= last)
    {
        middle = (first + last) / 2;         // Calculate midpoint
        if (array[middle] == value)          // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)      // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;              // If value is in upper half
    }
    return position;
}

void selectionSort(int array[], int size)
{
    int minIndex, minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}
