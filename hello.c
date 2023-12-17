#include <stdio.h>
#include <cs50.h>

int main(void)

{
    while(3) {
        string x = get_string("What's your name: ");
        printf("Working? %s , yes!", x);
    }
}
