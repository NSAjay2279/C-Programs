#include <stdio.h>

void draw(int n);

int get_int(const char *prompt);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

int get_int(const char *prompt)
{
    int value;
    printf("%s", prompt);
    scanf("%d", &value);
    return value;
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
