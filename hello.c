#include <stdio.h>

int main()
{
    int n = 10;
    int *p = &n;
    printf("%p\n", &n);
    printf("%p\n", &*p);

}
