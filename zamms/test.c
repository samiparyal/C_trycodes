#include <stdio.h>

int main() {
    int *p, q=50;
    p=&q;
    *p+=75;
    printf("The value of q is %d", q);
    return 0;
}
    