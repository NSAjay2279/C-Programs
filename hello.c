#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = 10;
    int *p = &n;
    printf("%p\n", &n);
    printf("%p\n", &*p);
    string t = "HI!\0";
    printf("%s",t);

}
