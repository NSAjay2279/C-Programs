#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main() {
   string s = get_int("enter a string: ");
   int n = strlen(s);
   printf("%i",n);
}
