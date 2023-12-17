#include <stdio.h>
#include <cs50.h>

int get_size();

int main(void)
{
    int n = get_size();
    printf("%d",n);
}

int get_size()
{
    return 4;
}
