#include <stdio.h>

void draw(int n);

int main(void)
{
    draw(4);
    return 0;  // Add explicit return 0 for clarity
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
