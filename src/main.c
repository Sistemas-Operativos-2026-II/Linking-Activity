#include <stdio.h>
#include "operations.h"
#include "logger.h"

int main(void)
{
    int values[] = {14, 7, 21, 9, 18, 4};
    int size = (int)(sizeof(values) / sizeof(values[0]));

    printf("Dataset: ");

    for (int i = 0; i < size; i++) 
    {
        printf("%d", values[i]);

        if (i < size - 1) printf(", ");
        
    }

    printf("\n");

    log_result("Average", average(values, size));
    log_result("Maximum", maximum(values, size));
    log_result("Minimum", minimum(values, size));

    return 0;
}
