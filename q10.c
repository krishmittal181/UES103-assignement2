#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = "3.145";
    double num = atof(s); // convert string to double
    printf("String = %s\n", s);
    printf("Converted number = %.3f\n", num);
    return 0;
}
