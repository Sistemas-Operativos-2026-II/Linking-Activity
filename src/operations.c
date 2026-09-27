#include "operations.h"

double average(const int *values, int size)
{
    if (size <= 0) return 0.0;
    
    long sum = 0;
    for (int i = 0; i < size; i++) sum += values[i];

    return (double)sum / size;
}

int maximum(const int *values, int size)
{
    if (size <= 0) return 0;
    

    int max = values[0];

    for (int i = 1; i < size; i++) 
    {
        if (values[i] > max) max = values[i];
    }

    return max;
}

int minimum(const int *values, int size)
{
    if (size <= 0) return 0;
    
    int min = values[0];

    for (int i = 1; i < size; i++) 
    {
        if (values[i] < min) min = values[i];   
    }

    return min;
}
