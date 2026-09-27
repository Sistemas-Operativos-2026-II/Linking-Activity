#include <stdio.h>
#include "logger.h"

void log_result(const char *label, double value)
{
    printf("%s: %.2f\n", label, value);
}
